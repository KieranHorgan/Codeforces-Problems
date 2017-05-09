#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll n, m, k, x, s[5'005];

ll dp[5'005][5'005];

ll solve(ll endOfR, ll noOfR) {
	if(endOfR>n) return 0;
	if(dp[endOfR][noOfR]!=-1) return dp[endOfR][noOfR];
	if(noOfR == k) return dp[endOfR][noOfR] = max(s[endOfR]-s[endOfR-m], solve(endOfR+1, noOfR));

	return dp[endOfR][noOfR] = max(solve(endOfR+1, noOfR), s[endOfR]-s[endOfR-m] + solve(endOfR+m, noOfR+1));
}

int main() {
	cin >> n >> m >> k;
	for(int i = 1; i <= n; i++) cin >> x, s[i]=s[i-1]+x;
	memset(dp, -1, sizeof(dp));
	cout << solve(m, 1) << endl;
}