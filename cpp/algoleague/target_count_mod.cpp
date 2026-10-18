#include <iostream>
#include <vector>

using namespace std;
long long mod = 1000000007;

int main()
{
    int sayiMiktari, hedef;
    cin >> sayiMiktari >> hedef;

    vector<int> vektor(sayiMiktari);
    for (int i = 0; i < sayiMiktari; i++)
    {
        cin >> vektor[i];
    }

    vector<long long> topla(sayiMiktari + 1, 0);
    for (int i = 0; i < sayiMiktari; i++) 
    {
        topla[i + 1] = topla[i] + vektor[i];
    }

    long long count = 0;
    

    for(int y1 = 0; y1 < sayiMiktari; y1++) 
    {
        for(int x1 = 0; x1 <= y1; x1++) 
        {
            if(topla[y1 + 1] - topla[x1] == hedef) 
            {
                for(int y2 = y1 + 1; y2 < sayiMiktari; y2++) 
                {
                    for(int x2 = y1 + 1; x2 <= y2; x2++) 
                    {
                        if(topla[y2 + 1] - topla[x2] == hedef) 
                        {
                            for(int y3 = y2 + 1; y3 < sayiMiktari; y3++) 
                            {
                                for(int x3 = y2 + 1; x3 <= y3; x3++) 
                                {
                                    if(topla[y3 + 1] - topla[x3] == hedef) 
                                    {
                                        count=(count + 1) % mod;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    cout << count << "\n";

    return 0;
}