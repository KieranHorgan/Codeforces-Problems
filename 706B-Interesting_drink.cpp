#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll n, q, a, b, ans;

vector<ll> x;
ll m[100005];

int main() {
    cin >> n;

    for(int i = 0; i < n; i++) {
        ll y;
        cin >> y;
        x.push_back(y);
    }

    cin >> q;

    sort(x.begin(), x.end());

    for(int i = 0; i < q; i++) {
        cin >> m[i];

        cout << upper_bound(x.begin(), x.end(), m[i]) - x.begin() << endl;
    }

    return 0;
}
