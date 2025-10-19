#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maxRectSum(vector<vector<int>> &mat) {
    int n = mat.size();
    int m = mat[0].size();
    int maxSum = INT_MIN;

    for (int left = 0; left < m; left++) {
        vector<int> temp(n, 0);
        for (int right = left; right < m; right++) {

            for (int i = 0; i < n; i++)
                temp[i] += mat[i][right];

            int sum = 0, best = INT_MIN;
            for (int x : temp) {
                sum = max(x, sum + x);
                best = max(best, sum);
            }

            maxSum = max(maxSum, best);
        }
    }
    return maxSum;
}

int main() {
    vector<vector<int>> mat = {
        {1, 2, -1, -4, -20},
        {-8, -3, 4, 2, 1},
        {3, 8, 10, 1, 3},
        {-4, -1, 1, 7, -6}
    };

    cout << maxRectSum(mat);
    return 0;
}
