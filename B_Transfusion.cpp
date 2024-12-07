#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define N 2000006
#define mod 1000000007
#define endl "\n"
#define bug(x) cout << #x << " : "<< x << "\n"

void Cry(int& tc) {
    int n; cin >> n;
    vector<int> arr(n);
    ll s1 = 0, s2 = 0, d1 = 0, d2 = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (i % 2 == 0)s1 += arr[i], d1++;
        else s2 += arr[i], d2++;
    }

    if (s1 % d1 == 0 && s2 % d2 == 0 && s1 / d1 == s2 / d2) cout << "YES\n";
    else cout << "NO\n";

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