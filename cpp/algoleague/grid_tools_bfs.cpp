#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

int main() 
{
    int boyut, aletSayisi; //N x N ebatinda 
    cin >> boyut >> aletSayisi;

    vector<string>grid(boyut);
    for (int i = 0; i < boyut; ++i) 
    {
        cin >> grid[i];
    }

    vector<pair<int, int> > alet(aletSayisi);
    for (int i = 0; i < aletSayisi; ++i) 
    {
        cin >> alet[i].first >> alet[i].second; //pairlere boyut vektoru
    }

    int sorguSayisi;
    cin >> sorguSayisi;

    for(int sorgu = 0; sorgu < sorguSayisi; sorgu++)
    {
        int satirKoordinati,sutunKoordinati;
        cin >> satirKoordinati >>sutunKoordinati;

        int ilkAlet = -1;

        int sonAlet = -1;
        int min_sure = INT_MAX;
        int max_sure = -1;

        for(int aletNo = 0; aletNo < aletSayisi; aletNo++)
        {
            int alet_satir_koordinati = alet[aletNo].first; //pairler
            int alet_sutun_koordinati = alet[aletNo].second;

            vector<vector<int> > uzaklik(boyut, vector<int>(boyut, -1));
            queue<pair<int, int>> sira;
            sira.push({alet_satir_koordinati,alet_sutun_koordinati}); //siraya alet koordinat pairini ekle
            uzaklik[alet_satir_koordinati][alet_sutun_koordinati] = 0;

            for (int i = 0; !sira.empty(); ++i)
            {
                int satir = sira.front().first;
                int sutun = sira.front().second;
                sira.pop();

                int satirYonu[4] = {-1, 1, 0, 0}; //yukari assagi sola saga
                int sutunYonu[4] = {0, 0, -1, 1};

                for (int j = 0; j < 4; j++) 
                {
                    int komsuSatir = satir + satirYonu[j];
                    int komsuSutun = sutun + sutunYonu[j];

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

            if(uzaklik[satirKoordinati][sutunKoordinati] != -1) 
            {
                if(uzaklik[satirKoordinati][sutunKoordinati] < min_sure)

                {
                    min_sure = uzaklik[satirKoordinati][sutunKoordinati];
                    ilkAlet = aletNo + 1;
                }


                if (uzaklik[satirKoordinati][sutunKoordinati] >= max_sure)
                {
                    max_sure = uzaklik[satirKoordinati][sutunKoordinati];
                    sonAlet = aletNo + 1;
                }
            }
        }

        cout << ilkAlet << " " << sonAlet << "\n";
    }

    return 0;
}