#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct CanavarGrimm 
{
    long long can, hasar, hasarArtisi; //big o notation Nlog(N) N=2*10^5
};

bool CanavarKarsilastir(const CanavarGrimm &a, const CanavarGrimm &b)
{
    return a.hasar < b.hasar;
}

long long oyunDegiskenler(vector<struct CanavarGrimm> &CanavarSayi, long long karakterCan, long long karakterHasar) 
{ //kopyalamamasi icin call by reference CanavarSayi
    long long geoSayisi = 0;

    for(CanavarGrimm &Canavar : CanavarSayi) 
    {
        long long gerekenVurus = (Canavar.can + karakterHasar - 1) / karakterHasar;
        long long anlikHasar = Canavar.hasar;

        for(long long vurus = 0; vurus < gerekenVurus; vurus++) 
        {
            karakterCan -= anlikHasar;

            if(karakterCan <= 0) 
            {
                return geoSayisi;
            }

            anlikHasar += Canavar.hasarArtisi;

            geoSayisi++;
        }
    }

    return geoSayisi;
}

int main()
{
    int denemeSayisi;
    cin >> denemeSayisi;

    while(denemeSayisi--) 
    {
        int canavarSayi;
        long long X, Y;
        cin >> canavarSayi >> X >> Y;

        vector<CanavarGrimm> CanavarSayi(canavarSayi);

        for (int i = 0; i < canavarSayi; ++i)
        {
            cin >> CanavarSayi[i].can;


        }
        for (int i = 0; i < canavarSayi; ++i) 
        {
            cin >> CanavarSayi[i].hasar;

        }


        for (int i = 0; i < canavarSayi; ++i)
        {
            cin >> CanavarSayi[i].hasarArtisi;
        }
        
        sort(CanavarSayi.begin(), CanavarSayi.end(), CanavarKarsilastir);

        cout << oyunDegiskenler(CanavarSayi, X, Y) << "\n";
    }

    return 0;
}
