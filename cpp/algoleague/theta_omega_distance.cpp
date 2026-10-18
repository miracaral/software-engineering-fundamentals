#include <iostream>
#include <vector>
#include <queue>
#include <limits.h>
#include <algorithm>
#include <set> 

using namespace std;


int thetaUzaklik(const vector<vector<pair<int, int>>>&node, const set<int>&thetaNodelari, const set<int>&omegaNodelari, int baslangicNode)
{           //her nodeun(index ve agirligini) pairle
    int sayi = node.size();
    vector<int> uzaklik(sayi, INT_MAX);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> priorityQue;

    uzaklik[baslangicNode] = 0;
    priorityQue.push({0, baslangicNode});

    while(!priorityQue.empty())
    {
        int x = priorityQue.top().second;
        priorityQue.pop();

        for(auto &komsu : node[x])
        {
            int vektor = komsu.first;
            int agirlik = komsu.second;

            bool molekulAyniMi = (thetaNodelari.count(x) && thetaNodelari.count(vektor)) ||
                        (omegaNodelari.count(x) && omegaNodelari.count(vektor));

            if (!molekulAyniMi && uzaklik[vektor] > uzaklik[x] + agirlik)
                {
                uzaklik[vektor] = uzaklik[x] + agirlik;
                priorityQue.push({uzaklik[vektor], vektor});
            }
            }
    }

    int minUzaklik = INT_MAX;
    for(int thetaNode : thetaNodelari)
        {
        minUzaklik = min(minUzaklik, uzaklik[thetaNode]);
        }

    return (minUzaklik == INT_MAX) ? -1 : minUzaklik;
}

int main()
{
    int node, edge;
    cin >> node >> edge;

    vector<vector<pair<int, int> > > Node(node + 1); 
    for(int i = 0; i < edge; ++i)
        {
        int a, b, agirlik;
        cin >> a >> b >> agirlik;
        Node[a].push_back({b, agirlik});
        Node[b].push_back({a, agirlik});
        }

    int thetaNo;
    cin >> thetaNo;
    set<int> thetaNodelari; 
    for(int i = 0; i < thetaNo; ++i)
    {
        int nodeIndex;
        cin >> nodeIndex;
        thetaNodelari.insert(nodeIndex); 
    }

    int omegaNo;
    cin >> omegaNo;
set<int> omegaNodelari; 
    for(int i = 0; i < omegaNo; ++i)
        {
        int nodeIndex;
        cin >> nodeIndex;
        omegaNodelari.insert(nodeIndex); 
        }

    int sonUzaklik = -1;
    for (int omegaNode : omegaNodelari)
        {
        int enKisaUzaklik = thetaUzaklik(Node, thetaNodelari, omegaNodelari, omegaNode);
        sonUzaklik = max(sonUzaklik, enKisaUzaklik);
    }

    cout << sonUzaklik << endl;

    return 0;
}