#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ll n, m;
	cin >> n >> m;
	vector<vector<ll>> dom(n+2, vector<ll>(m+2,0)), domH(n+2, vector<ll>(m+2,0)), domV(n+2, vector<ll>(m+2,0));
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= m; j++) {
			char c;
			cin >> c;
			if(c=='.') dom[i][j]=1;
		}
	}
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= m; j++) {
			domH[i][j] = domH[i-1][j] + domH[i][j-1] - domH[i-1][j-1];
			domV[i][j] = domV[i-1][j] + domV[i][j-1] - domV[i-1][j-1];
			if(dom[i][j] && dom[i][j+1])
				domH[i][j]++;
			if(dom[i][j] && dom[i+1][j])
				domV[i][j]++;
		}
	}
	ll q;
	cin >> q;
	while(q--) {
		ll r1, c1, r2, c2;
		cin >> r1 >> c1 >> r2 >> c2;
		cout << (domH[r2][c2-1] - domH[r2][c1-1] - domH[r1-1][c2-1] + domH[r1-1][c1-1]) + (domV[r2-1][c2] - domV[r2-1][c1-1] - domV[r1-1][c2] + domV[r1-1][c1-1])<< endl;
	}
}