#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

const int MOD = 1000000007;

int main()  //big o nˆ2
{
    int N;
    string S;
    cin >> N;
    cin >> S;

    vector<long long> String(N + 1, 0);
    unordered_map<char, int> son;

    String[0] = 1;

    for(int i = 1; i <= N; ++i)
        {
        String[i] = (2 * String[i - 1]) % MOD;

        if(son.find(S[i - 1]) != son.end())
            {
            String[i] = (String[i] - String[son[S[i - 1]] - 1] + MOD) % MOD;
            }

        son[S[i - 1]] = i;
        }

    long long farkliSubsequence = String[N];

    long long toplamSubstring = 0;



    unordered_map<string, bool> gorulenSubstringler;

    for (int i = 0; i < N; ++i)
    {
            string substring = "";
            for (int j = i; j < N; ++j)
                {
                substring += S[j];
                if (!gorulenSubstringler[substring])
                {
                    toplamSubstring = (toplamSubstring + 1) % MOD;
                    gorulenSubstringler[substring] = true;
                }
                }
    }

    long long uygunSifreler = (farkliSubsequence - toplamSubstring - 1 + MOD) % MOD;


    cout << uygunSifreler << endl;

    return 0;
}