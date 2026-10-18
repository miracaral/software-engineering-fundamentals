#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() 
{
    int vektorSayisi, boyutSayisi;
    cin >> vektorSayisi >> boyutSayisi;

    
    vector<vector<int> > vektorler(vektorSayisi, vector<int>(boyutSayisi));
    for (int i = 0; i < vektorSayisi; i++) 
    {
        for (int j = 0; j < boyutSayisi; j++) //vektorleri aliyoruz
        {
            cin >> vektorler[i][j];
        }
    }

    vector<int> target(boyutSayisi);
    for(int i = 0; i < boyutSayisi;i++) //target al
    {
        {
            cin >> target[i];
        }

    
        for(int i = 0; i < pow(2, vektorSayisi); i++) //tum subsetleri iterate et gez
        {
            vector<int> toplam(boyutSayisi, 0);
            for(int j = 0; j < vektorSayisi; j++) 
            {
                if ((i / int(pow(2, j))) % 2 == 1)// j. vektor subsette var mi?
                {
                    for (int k = 0; k < boyutSayisi; k++) 
                    {
                        toplam[k] += vektorler[j][k]; // j yi ekle
                    }
                }
            }

            if (toplam == target) 
            {
                cout << "YES" << endl;
                return 0;
            }
        }

        
    }

    cout << "NO" << endl;
    return 0;
}