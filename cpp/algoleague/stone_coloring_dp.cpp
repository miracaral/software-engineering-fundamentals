#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

const int maxN = 1000;

long long sira[maxN][maxN][2];
int renk[maxN], tasDegeri[maxN];

long long cozum(int sol, int sag, int tur, int sonRenkNe, int K) 
{
    if (sira[sol][sag][tur] != -1) return sira[sol][sag][tur];
    
    if (sol == sag)
    {
        if (tur == 0) 
        { 
            return sira[sol][sag][tur] = tasDegeri[sol] + (renk[sol] == sonRenkNe ? K : 0);
        } 
        else 
        {
                return sira[sol][sag][tur] = 0;
        }
    }

    if(tur == 0)
    {
        long long solTaraf = tasDegeri[sol] + cozum(sol + 1, sag, 1, renk[sol], K);
        if (renk[sol] == sonRenkNe) solTaraf += K;

        long long sagTaraf = tasDegeri[sag] + cozum(sol, sag - 1, 1, renk[sag], K);
        if (renk[sag] == sonRenkNe) sagTaraf += K;

        return sira[sol][sag][tur] = max(solTaraf, sagTaraf);
    } 
    else
    {
        long long solTaraf = cozum(sol + 1, sag, 0, sonRenkNe, K);
        long long sagTaraf = cozum(sol, sag - 1, 0, sonRenkNe, K);

        return sira[sol][sag][tur] = min(solTaraf, sagTaraf);
    }
}

int main() 
{
    int sayi, bonusPuan;
    cin >> sayi;

    vector<pair<int, int> > taslar(sayi); //taslari vektore pairle ve kaydet
    for (int i = 0; i < sayi; ++i) {
        cin >> tasDegeri[i] >> renk[i];
    }

    cin >> bonusPuan;

    memset(sira, -1, sizeof(sira));

    cout << cozum(0, sayi - 1, 0, -1, bonusPuan) << endl;

    return 0;
}
