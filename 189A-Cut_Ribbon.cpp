#include <iostream>

using namespace std;

#define ll long long

ll n, m, ans;
ll a, b, c;
ll dp[10000];

int main() {
    cin >> n;
    ll abc[3];
    cin >> abc[0] >> abc[1] >> abc[2];

    for(int i = 1; i < n+2; i++) {
        dp[i] = -1;
    }

    dp[0] = 0;

    for(int i = 0; i < n; i++) {
 //       cout << dp[i] << " ";
        if(dp[i] >= 0)
            for(int j = 0; j < 3; j++) {
                dp[i+abc[j]] = max(dp[i+abc[j]], dp[i]+1);
            }
    }

    cout << dp[n];

    return 0;
}
