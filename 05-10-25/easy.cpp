#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>> mat = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    int m = mat.size(), n = mat[0].size();
    vector<vector<int>> res(n, vector<int>(m));

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            res[j][m - i - 1] = mat[i][j];

    for (auto &row : res) {
        for (auto x : row)
            cout << x << " ";
        cout << endl;
    }
}
