
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int M, N;
    cin >> M >> N;

    vector<int> firstRow(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> firstRow[i];
    }

    vector<int> firstCol(M);
    for (int i = 0; i < M; ++i)
    {
        cin >> firstCol[i];
    }

    vector<vector<int>> encryptedGrid(M, vector<int>(N));
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> encryptedGrid[i][j];
        }
    }

    vector<vector<int>> originalGrid(M, vector<int>(N));
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            int xorResult = encryptedGrid[i][j];

            for (int k = 0; k < N; ++k) {
                if (k != j) {
                    xorResult ^= firstRow[k];
                }
            }

            for (int k = 0; k < M; ++k) {
                if (k != i) {
                    xorResult ^= firstCol[k];
                }
            }
            originalGrid[i][j] = xorResult;
        }
    }

    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << originalGrid[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}