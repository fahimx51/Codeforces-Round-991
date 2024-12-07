#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define N 2000006
#define mod 1000000007
#define endl "\n"
#define bug(x) cout << #x << " : "<< x << "\n"

string a, b, c;

int dp[1005][1005];

int f(int i, int j) {
    if (i == a.length() && j == b.length()) return 0;

    if (dp[i][j] != -1) return dp[i][j];

    int res = 1e9;

    if (i < a.length()) {
        int cost = f(i + 1, j) + (a[i] != c[i + j]);
        res = min(res, cost);
    }
    if (j < b.length()) {
        int cost = f(i, j + 1) + (b[j] != c[i + j]);
        res = min(res, cost);
    }

    return dp[i][j] = res;


}

void Cry(int& tc) {
    cin >> a >> b >> c;
    memset(dp, -1, sizeof(dp));

    cout << f(0, 0) << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testCase = 1;
    cin >> testCase;

    for (int i = 1; i <= testCase; i++) {
        Cry(testCase);
    }

    return 0;
}