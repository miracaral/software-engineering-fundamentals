#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int puanCezasi(int n, int a, int b, vector<int> &h) // n: kitap sayısı, a: gold kitap kapasitesi, b: black kitap kapasitesi, h: kitap yükseklikleri
{                                          //h array vektoru olacagindan call by reference     // return (ceza puanı)
    int gerekenKitap = 0;
    for (int i = 0; i < n; i++) 
    {
        gerekenKitap += h[i];
    }

    if (gerekenKitap > a + b) 
    {
        return -1;
    }

    vector<vector<int> > dp(n + 1, vector<int>(2, INT_MAX)); // dp[i][0] = gold, dp[i][1] = black
    dp[0][0] = dp[0][1] = 0;

    for (int i = 1; i <= n; i++) 
    {
        for (int renk = 0; renk < 2; renk++) 
        {
            if (renk == 0) 
            {  // Gold book inceleme bolumu
                if (a >= h[i - 1]) 
                {
                    dp[i][0] = min(dp[i][0], dp[i - 1][0] + (i > 1 && h[i - 1] != h[i - 2] ? 1 : 0));//esit degilse return puan
                    dp[i][1] = min(dp[i][1], dp[i - 1][1] + (i > 1 && h[i - 1] != h[i - 2] ? 1 : 0));
                }
            } 
                // Black book inceleme bolumu
            else 
            {
                if (b >= h[i - 1]) 
                {
                    dp[i][0] = min(dp[i][0], dp[i - 1][0] + (i > 1 && h[i - 1] != h[i - 2] ? 1 : 0)); //esit degilse return puan
                    dp[i][1] = min(dp[i][1], dp[i - 1][1] + (i > 1 && h[i - 1] != h[i - 2] ? 1 : 0)); 
                }
            }
        }
    }

    return dp[n][0];
}

int main() 
{
    int n, a, b; // n: kitap sayısı, a: gold kitap kapasitesi, b: black kitap kapasitesi
    cin >> n >> a >> b;

    vector<int> h(n);
    for (int i = 0; i < n; i++) 
    {
        cin >> h[i];
    }

    cout << puanCezasi(n, a, b, h) << endl;

    return 0;
}
