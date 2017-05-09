#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double


ll n, k, d;
ll MOD = 1000000007;

map<pair<ll, bool>, ll> dp;

ll dfs(ll remaining, bool hasD) {
	if(remaining<0) return 0;
	if(dp.find({remaining,hasD}) != dp.end()) {	return dp[{remaining,hasD}]; }

	if(remaining==0 && hasD) return dp[{remaining,hasD}]=1;
	if(remaining==0) return dp[{remaining,hasD}]=0;
	ll ans = 0;
	for(int i = 1; i <= k; i++) {
		ans += dfs(remaining-i, (i>=d || hasD));
		ans %= MOD;
	}

	return dp[{remaining,hasD}] = ans;
}

int main() {
	cin >> n >> k >> d;

	cout << dfs(n, 0)%MOD << endl;

}