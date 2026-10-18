#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

int main() {
    int boyut, aletSayisi; //N x N ebatinda 
    cin >> boyut >> aletSayisi;

    vector<string>grid(boyut);
    for (int i = 0; i < boyut; ++i) 
    {
        cin >> grid[i];
    }

    vector<pair<int, int>> alet(aletSayisi);
    for (int i = 0; i < aletSayisi; ++i) 
    {
        cin >> alet[i].first >> alet[i].second; //pairlere boyut vektoru
    }

    int sorguSayisi;
    cin >> sorguSayisi;

    for (int sorgu = 0; sorgu < sorguSayisi; sorgu++)
    {
        int rKoordinati, cKoordinati;
        cin >> rKoordinati >> cKoordinati;

        int ilkAlet = -1;
        int sonAlet = -1;
        int min_sure = INT_MAX;
        int max_sure = -1;

        for (int aletNo = 0; aletNo < aletSayisi; aletNo++)
        {
            int alet_satir_koordinati = alet[aletNo].first; //pairler
            int alet_sutun_koordinati = alet[aletNo].second;

            vector<vector<int> > uzaklik(boyut, vector<int>(boyut, -1));
            queue<pair<int, int>> sira;
            sira.push({alet_satir_koordinati,alet_sutun_koordinati});
            uzaklik[alet_satir_koordinati][alet_sutun_koordinati] = 0;

            while (!sira.empty()) 
            {
                int satir = sira.front().first;
                int sutun = sira.front().second;
                sira.pop();

                int dr[] = {-1, 1, 0, 0};
                int dc[] = {0, 0, -1, 1};

                for (int k = 0; k < 4; ++k) 
                {
                    int komsuSatir = satir + dr[k];
                    int komsuSutun = sutun + dc[k];

                    if(komsuSatir >= 0 && komsuSatir < boyut)
                    {
                        if(komsuSutun >= 0 && komsuSutun < boyut)
                        {
                            if(grid[komsuSatir][komsuSutun] != '#')
                            {
                                if(uzaklik[komsuSatir][komsuSutun] == -1)
                                {
                                    uzaklik[komsuSatir][komsuSutun] = uzaklik[satir][sutun] + 1;
                                    sira.push({komsuSatir, komsuSutun});
                                }
                            }
                        }
                    }
                }
            }

            if (uzaklik[rKoordinati][cKoordinati] != -1) 
            {
                if (uzaklik[rKoordinati][cKoordinati] < min_sure)

                {
                    min_sure = uzaklik[rKoordinati][cKoordinati];
                    ilkAlet = aletNo + 1;
                }
                if (uzaklik[rKoordinati][cKoordinati] >= max_sure)
                {
                    max_sure = uzaklik[rKoordinati][cKoordinati];
                    sonAlet = aletNo + 1;
                }
            }
        }

        cout << ilkAlet << " " << sonAlet << "\n";
    }

    return 0;
}