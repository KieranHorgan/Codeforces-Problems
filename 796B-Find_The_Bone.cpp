#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define endl "\n"

ll n, m, k, ans;
string s;
ll h[10000000];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m >> k;

	for(int i = 1; i <= m; i++) {
		int x;
		cin >> x;
		h[x]=1;
	}

	ll pos = 1;
	for(int i = 1; i <= k; i++) {
		ll u, v;
		cin >> u >> v;

		if(h[pos]) break;
		if(pos==u) pos = v;
		else if(pos==v) pos = u;
	}

	cout << pos << endl;
} 	