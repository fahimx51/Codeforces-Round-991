#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define N 2000006
#define mod 1000000007
#define endl "\n"
#define bug(x) cout << #x << " : "<< x << "\n"

void Cry(int& tc) {
    string s; cin >> s;
    int two = 0, six = 0;

    ll sum = 0;

    for (int i = 0; i < s.length(); i++) {
        sum += (s[i] - 48);
        if (s[i] == '2') two++;
        else if (s[i] == '3') six++;
    }
    for (int i = 0; i <= min(8, two); i++) {
        for (int j = 0; j <= min(2, six); j++) {
            if ((sum + i * 2 + j * 6) % 9 == 0) {
                cout << "YES" << endl;
                return;
            }
        }
    }
    cout << "NO" << endl;
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