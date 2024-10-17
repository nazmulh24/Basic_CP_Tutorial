#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int longest_common_subsequence_length(vector<int>& X, vector<int>& Y) {
    int m = X.size();
    int n = Y.size();

    // Initializing the matrix for dynamic programming
    vector<vector<int> > dp(m + 1, vector<int>(n + 1, 0));

    // Building the matrix
    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (X[i - 1] == Y[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    return dp[m][n];
}

int min_subarray_length_to_remove(vector<int>& A, vector<int>& B) {
    int common_length = longest_common_subsequence_length(A, B);
    if (B.size() == A.size() && common_length == B.size()) {
        return 0;
    }
    return B.size() - common_length;
}

int main() {
    int T;
    cin >> T;

    for (int caseNum = 1; caseNum <= T; ++caseNum) {
        int N;
        cin >> N;
        vector<int> A(N);
        vector<int> B(N);

        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }

        for (int i = 0; i < N; ++i) {
            cin >> B[i];
        }

        int min_length = min_subarray_length_to_remove(A, B);
        cout << "Case " << caseNum << ": " << min_length << endl;
    }

    return 0;
}
