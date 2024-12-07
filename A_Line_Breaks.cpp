#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define N 2000006
#define mod 1000000007
#define endl "\n"
#define bug(x) cout << #x << " : "<< x << "\n"

void Cry(int& tc) {
    int ans = 0;
    bool f = false;
    int n, m; cin >> n >> m;
    while (n--) {
        string s; cin >> s;
        int sz = s.size();
        if (m - sz >= 0 && !f) {
            ans++;
            m -= sz;
        }
        else f = true;
    }
    cout << ans << endl;
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