#include <bits/stdc++.h>

#define ll long long

using namespace std;

ll n, m, ans;
vector<ll> a;

ll dp[100005];
ll c[100005];

int main() {
	cin >> n;
	for(ll i = 0; i < n; i++) {
		ll x;
		cin >> x;
		c[x]++;
	}

	dp[1] = c[1];
	dp[2] = c[2]*2;
	dp[3] = dp[1] + c[3]*3;

	for(ll i = 3; i <= 100000; i++)
		dp[i] = max(dp[i-2], dp[i-3]) + c[i]*i;

	for(ll i = 1; i <= 100000; i++)
		ans = max(ans, dp[i]);

	cout << ans << endl;
}