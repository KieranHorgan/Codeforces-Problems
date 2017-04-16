#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll n, m, ans;
string s;
ll b[100005];
ll a[100005];

int main() {
    ll l1, l2, r1, r2, p;
    cin >> l1 >> r1 >> l2 >> r2 >> p;

    ans = min(r1, r2) - max(l1, l2);
    if(max(l1, l2) > min(r1, r2)) {
        cout << 0 << endl;
        return 0;
    }
    ans++;

    if(p <= min(r1, r2) && p >= max(l1, l2)) ans--;

    cout << ans << endl;

    return 0;
}
