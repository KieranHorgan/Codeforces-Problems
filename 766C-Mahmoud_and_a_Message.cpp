#include <bits/stdc++.h>

#define ll long long

using namespace std;

ll n, m;
ll fLongest[1005], memo[1005], values[30];
string s;

ll ans1, ans2, ans3;

ll dp(ll current){
    if(current == n) return 1;
    if(memo[current] != -1) return memo[current];
    ll ans = 0;
    
    for(ll i = 1; i <= fLongest[current]; i++) {
        ans += dp(current+i);
        ans %= 1000000007;
    }

    return memo[current] = ans;
}


int main() {
    cin >> n >> s;

    fill(memo, memo+1005, -1);

    for(ll i = 0; i < 26; i++) {
        cin >> values[i];
    }

    for(ll i = 0; i < n; i++) {
        m = 100000000;
        for(ll j = i; j <= n; j++) {
            m = min(m, values[s[j]-'a']);
            if(j-i >= m) {
                fLongest[i] = j-i;
                break;
             }
        }
    }

    for(ll i = 0; i < n; i++) ans2 = max(ans2, fLongest[i]);

    for(ll current = 0; current<n; current+=fLongest[current], ans3++);

    cout << dp(0) << endl << ans2 << endl << ans3 << endl;
}