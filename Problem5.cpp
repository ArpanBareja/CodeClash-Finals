#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MAXN = 101010;

int main() {
    
    int n;
    cin >> n;

    vector<long long> a(n + 1), freq(100001, 0);
    vector<vector<long long>> dp(100001, vector<long long>(2, 0));

    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
        freq[a[i]]++;
    }

    for (int i = 1; i <= 100000; ++i) {
        dp[i][0] = max(dp[i - 1][0], dp[i - 1][1]);
        dp[i][1] = dp[i - 1][0] + freq[i] * i;
    }

    cout << max(dp[100000][0], dp[100000][1]) << '\n';

    return 0;
}
