#include <iostream>
#include <vector>

using namespace std;

bool esitMi(vector<int>&vektor1, vector<int>&vektor2) //vektorleri kiyaslama
    {
        if(vektor1.size() != vektor2.size())
        {
            return false;
        }
        for (int i = 0; i < vektor1.size(); ++i)
        {
            if (vektor1[i] != vektor2[i]) 
            {
                return false;
            }
        }
    return true;
    }

bool TargetBul(vector<vector<int> > &vektorler,vector<int> &target, vector<int > &toplam, int indexSayisi) 
                
{
    if(indexSayisi == vektorler.size()) //sona gelindi mi
    {
        return esitMi(toplam, target);
    }


    for(int i = 0; i < toplam.size(); ++i) 
        {
        toplam[i] += vektorler[indexSayisi][i];// vektoru ekle
    }
    if(TargetBul(vektorler, target, toplam, indexSayisi + 1))
    {
        return true;
    }




        for(int i = 0; i < toplam.size(); ++i)//vektoru cikar
        {
            toplam[i] -= vektorler[indexSayisi][i];
        }

        return TargetBul(vektorler, target, toplam, indexSayisi + 1);
}

int main()
{
    int sayi, boyut;
    cin >> sayi >> boyut;

    vector<vector<int> >vektorler(sayi, vector<int>(boyut));

    for(int i = 0; i < sayi; ++i)
    {
        for (int j = 0; j < boyut; ++j)
        {
            cin >> vektorler[i][j];
        }
    }



    vector<int> target(boyut);
    for(int i = 0; i < boyut; ++i) 
        {
        cin >> target[i];
        }

    vector<int> toplam(boyut, 0); // toplami sifirla
    if(TargetBul(vektorler, target, toplam, 0))
        {
        cout << "YES" << endl;
    } 
    else 
        {
            cout << "NO" << endl;
        }




    return 0;
}