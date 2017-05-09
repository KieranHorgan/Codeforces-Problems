#include <bits/stdc++.h>

using namespace std;

#define ll long long 

ll n, m, k;
vector<pair<ll, pair<ll, ll>>> edges;
bool isC[100005], isS[100005];
int main() {
	cin >> n >> m >> k;

	for(int i = 0; i < m; i++) {
		ll u, v, w;
		cin >> u >> v >> w;
		// cout << u << " " << v << " " << w << endl;
		edges.push_back({w,{u,v}});
	}
	// cout << endl;
	for(int i = 0; i < k; i++) {
		ll x;
		cin >> x;
		isS[x]=1;
		// cout << x << ":" << isS[x] << endl;
	}
	ll ans = 1<<30;
	for(int i = 0; i < m; i++) {
		ll w = edges[i].first;
		ll u = edges[i].second.first;
		ll v = edges[i].second.second;
		// cout << u << " " << v << " " << w << endl;
		// cout << isS[u] << ":" << isS[v] << endl;
		if(isS[u]!=isS[v]) ans = min(ans, w);
	}
	if(ans == 1<<30) cout << -1 << endl;
	else cout << ans << endl;
}