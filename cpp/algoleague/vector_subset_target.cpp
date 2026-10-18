#include <iostream>
#include <vector>
using namespace std;

bool canFormTarget(int N, int D, vector<vector<int>>& vectors, vector<int>& target) {

    for (int mask = 0; mask < (1 << N); ++mask) {
        vector<int> sum(D, 0);

        for (int i = 0; i < N; ++i) {
            if (mask & (1 << i)) {
                for (int d = 0; d < D; ++d) {
                    sum[d] += vectors[i][d];
                }
            }
        }

        if (sum == target) {
            return true;
        }
    }

    return false;
}

int main() {
    int N, D;
    cin >> N >> D;

    vector<vector<int>> vectors(N, vector<int>(D));
    for (int i = 0; i < N; ++i) {
        for (int d = 0; d < D; ++d) {
            cin >> vectors[i][d];
        }
    }

    vector<int> target(D);
    for (int d = 0; d < D; ++d) {
        cin >> target[d];
    }

    if (canFormTarget(N, D, vectors, target)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
