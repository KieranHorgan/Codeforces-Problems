#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double


ll n, k, d;
ll MOD = 1000000007;

ll dp[100005];


int main() {
	cin >> n;
	for(int i = 0; i < n; i++) {
		ll x;
		cin >> x;
		dp[x]+=x;
	}

	ll ans = max(dp[1], dp[2]);
	for(int i = 3; i <= 100003; i++) {
		dp[i] += max(dp[i-2], dp[i-3]);
		ans = max(dp[i], ans);
	}

	cout << ans << endl;

}