#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main() {
    int n, d;
    cin >> n >> d;

    vector<vector<int> > vectors(n, vector<int>(d));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < d; ++j) {
            cin >> vectors[i][j];
        }
    }

    vector<int> target(d);
    for (int i = 0; i < d; ++i) {
        cin >> target[i];
    }

    for (int i = 0; i < (1 << n); ++i) {
        vector<int> current_sum(d, 0);
        for (int j = 0; j < n; ++j) {
            if ((i >> j) & 1) {
                for (int k = 0; k < d; ++k) {
                    current_sum[k] += vectors[j][k];
                }
            }
        }

        if (current_sum == target) {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}