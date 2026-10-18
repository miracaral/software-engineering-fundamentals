#include <iostream>
#include <vector>
#include <queue>
#include <climits>
#include <algorithm>
#include <tuple>

using namespace std;

const int xBoyut[] = { -1, 1, 0, 0 }; //yukari asagi sola saga
const int yBoyut[] = { 0, 0, -1, 1 };

struct sorgu
{
    int satir, sutun;
};

int main()
{
    int N, M;
    cin >> N >> M;
    
    vector<string> grid(N);
    for (int i = 0; i < N; i++)
        {
        cin >> grid[i];
    }
    
    vector<pair<int, int> > alet(M);
    for (int i = 0; i < M; i++)
    {
        cin >> alet[i].first >> alet[i].second;
    }
    
    int Q;
    cin >> Q;
    
    vector<sorgu> sorgular(Q);
    for (int i = 0; i < Q; i++)
    {
        cin >> sorgular[i].satir >> sorgular[i].sutun;
    }
    
    vector<vector<int> > uzaklik(M, vector<int>(N * N, INT_MAX));
    
    for (int i = 0; i < M; i++)
    {
        int satir = alet[i].first, sutun = alet[i].second;
            uzaklik[i][satir * N + sutun] = 0;
    queue<pair<int, int> > sira;
            sira.push({satir, sutun});
        
        while(!sira.empty())
        {
            int x, y;
            tie(x, y) = sira.front();
            sira.pop();
            
            for (int d = 0; d < 4; d++)
            {
                int nx = x + xBoyut[d], ny = y + xBoyut[d];
                if (nx >= 0 && nx < N && ny >= 0 && ny < N && grid[nx][ny] == '.')
                {
                    if (uzaklik[i][nx * N + ny] == INT_MAX)
                    {
                        uzaklik[i][nx * N + ny] = uzaklik[i][x * N + y] + 1;
                        sira.push({nx, ny});
                    }
                }
            }
        }
    }

    for (auto &q : sorgular)
    {
        int satir = q.satir, sutun = q.sutun;
        
        int ilk = INT_MAX, son = -1;
        int ilkNo = -1, sonNo = -1;
        
        for (int i = 0; i < M; i++)
        {
            int Uzaklik = uzaklik[i][satir * N + sutun];
            if(Uzaklik != INT_MAX)
            {
                if (ilk == INT_MAX || Uzaklik < ilk)
                {
                    ilk = Uzaklik;
                    ilkNo = i + 1;
                }
                if(son == -1 || Uzaklik > son)
                {
                    son = Uzaklik;
                    sonNo = i + 1;
                }
            }
        }
        
        if (ilk == INT_MAX)
            {
            cout << "-1 -1\n";
         }
        else
            {
            cout << ilkNo << " " << sonNo << "\n";
        }
    }
    
    return 0;
}
