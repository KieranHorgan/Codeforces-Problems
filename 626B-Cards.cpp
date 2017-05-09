#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n';

ll n;
string s;
bool dp[205][205][205];
bool canR, canG, canB;

void solve(ll r, ll g, ll b) {
	if(dp[r][g][b]) return;
	dp[r][g][b] = 1;
	if(r+g+b==1) {
		if(r) canR = 1;
		if(g) canG = 1;
		if(b) canB = 1;
		return;
	}

	if(r>=2) solve(r-1,g  ,b  );
	if(g>=2) solve(r  ,g-1,b  );
	if(b>=2) solve(r  ,g  ,b-1);

	if(r>=1 && g>=1) solve(r-1,g-1,b+1);
	if(g>=1 && b>=1) solve(r+1,g-1,b-1);
	if(b>=1 && r>=1) solve(r-1,g+1,b-1);
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	ll r=0,g=0,b=0;
	cin >> n >> s;

	for(int i = 0; i < n; i++) {
		if(s[i]=='R') r++;
		if(s[i]=='G') g++;
		if(s[i]=='B') b++;
	}

//	cout << r << " " << g << " " << b << endl;
	solve(r,g,b);

	if(canB) cout << 'B';
	if(canG) cout << 'G';
	if(canR) cout << 'R';
	cout << endl;
}