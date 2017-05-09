#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl '\n'
#define INF 1<<30

ll n, m, p, x, y, k, ans = INF;
string s;

bool won[2000005];
ll dp[2000005];
void solve(ll s, ll correct) {
	if(s<y) return;
	if(correct>=ans) return;
	if(dp[s]<correct && dp[s] != -1) return;
	dp[s]=correct;

	memset(won, 0, sizeof(won));
	vector<ll> winning;
	ll i = (s / 50) % 475;
	for(int j = 0; j < 25; j++) {
	    i = (i * 96 + 42) % 475;
//	    cout << i+26 << " ";
		won[26+i] = 1;
		winning.push_back(i+26);
	}
//	for(auto j: winning) cout << j << " ";
//	cout << endl;
	if(won[p]) {
		ans = min(ans, correct);
		return;
	}
	solve(s-50, correct);
	solve(s+100, correct+1);
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	cin >> p >> x >> y;
	memset(dp, -1, sizeof(dp));

//	sort(winning.begin(), winning.end());

	solve(x, 0);

	cout << ans << endl;
}