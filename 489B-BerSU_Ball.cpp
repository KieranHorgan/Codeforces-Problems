#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll n, m, ans;
ll a, b, c;
ll dp[10000];

int main() {
    cin >> n;
    int b[n];
    for(int i = 0; i < n; i++) cin >> b[i];

    cin >> m;
    int g[m];
    for(int i = 0; i < m; i++) cin >> g[i];

    sort(b, b+n);
    sort(g, g+m);

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++) {
            if(b[i] - g[j] <= 1 && b[i] - g[j] >= -1) {
                g[j] = -1;
                ans++;
                break;
            }
        }


    cout << ans;
    return 0;
}
