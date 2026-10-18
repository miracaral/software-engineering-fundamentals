#include <iostream>
#include <vector>
#include <queue>
#include <limits.h>
#include <algorithm>

using namespace std;


int thetaUzaklik(const vector<vector<pair<int, int>>>& node, const vector<int>&thetaNodelari, const vector<int>&omegaNodelari, int baslangicNode)
{       //her nodeun(index ve agirligini) pairle
    int sayi = node.size();
    vector<int> uzaklik(sayi, INT_MAX);
    vector<bool> visited(sayi, false);
    priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > priorityQue;

    uzaklik[baslangicNode] = 0;
    priorityQue.push({0, baslangicNode});

    while (!priorityQue.empty())
        {
        int x = priorityQue.top().second;
        priorityQue.pop();

        if (visited[x])
        {
            continue;
        }
        visited[x] = true;

        for (auto &komsu : node[x])
        {
            int vektor = komsu.first;
            int agirlik = komsu.second;

            bool molekulAyniMi = (binary_search(thetaNodelari.begin(), thetaNodelari.end(), x) && binary_search(thetaNodelari.begin(), thetaNodelari.end(), vektor)) ||
                            (binary_search(omegaNodelari.begin(), omegaNodelari.end(), x) && binary_search(omegaNodelari.begin(), omegaNodelari.end(), vektor));

            if (!molekulAyniMi && uzaklik[vektor] > uzaklik[x] + agirlik)
            {
                uzaklik[vektor] = uzaklik[x] + agirlik;
                priorityQue.push({uzaklik[vektor], vektor});
            }
        }
        }

    int minUzaklik = INT_MAX;
    for (int thetaNode : thetaNodelari)
        {
        minUzaklik = min(minUzaklik, uzaklik[thetaNode]);
    }

    return (minUzaklik == INT_MAX) ? -1 : minUzaklik;
    }
int main() 
{
    int node, edge;
    cin >> node >> edge;

    vector<vector<pair<int, int>>> Node(node + 1); //node ve agirliklarini tutan vektor
    for(int i = 0; i < edge; ++i)
        {
        int a, b, agirlik;
        cin >> a >> b >> agirlik;
        Node[a].push_back({b, agirlik});
        Node[b].push_back({a, agirlik});
    }

    int thetaNo;
    cin >> thetaNo;
    vector<int> thetaNodes(thetaNo);
    for(int i = 0; i < thetaNo; i++)
    {
        cin >> thetaNodes[i];
    }

    int omegaNo;
    cin >> omegaNo;
    vector<int> omegaNodelari(omegaNo); 
    for(int i = 0; i < omegaNo; i++)
        {
        cin >> omegaNodelari[i];
    }
    
    sort(thetaNodes.begin(), thetaNodes.end());
    sort(omegaNodelari.begin(), omegaNodelari.end());
    
    int sonUzaklik = -1;
    for(int omegaNode : omegaNodelari)
    {
        int enKisaUzaklik = thetaUzaklik(Node, thetaNodes, omegaNodelari, omegaNode);
        sonUzaklik = max(sonUzaklik, enKisaUzaklik);
        }

    cout << sonUzaklik << endl;

    return 0;
}
