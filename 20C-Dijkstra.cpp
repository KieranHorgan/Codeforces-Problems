#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll n, m;
vector<pair<ll, ll>> AdjList[100005];
ll dist[100005];
bitset<100005> visited;
ll parent[100005];

void Dijkstra(ll s) {
	for(int i = 0; i <= n; i++) dist[i]=-1;
	dist[s] = 0;
	
	priority_queue<ll, vector<pair<ll,ll>>, greater<pair<ll,ll>>> pq;
	pq.push({0,s});
	parent[s]=s;

	while(!pq.empty()) {
		ll u = pq.top().second; pq.pop();

		if(visited[u]) continue;
		visited[u] = 1;

		for(auto v: AdjList[u]) {
			if(dist[v.second]>dist[u]+v.first || dist[v.second]==-1) {
				dist[v.second] = dist[u]+v.first;
				parent[v.second]=u;
				pq.push({dist[v.second], v.second});
			}
		}
	}
}

string printPath(ll s, ll e) {
	if(e==s) return to_string(e);
	return (printPath(s, parent[e]) + " " + to_string(e));
}

int main() {
	cin >> n >> m;
	for(int i = 0; i < m; i++) {
		ll u, v, w;
		cin >> u >> v >> w;
		AdjList[u].push_back({w,v});
		AdjList[v].push_back({w,u});
	}

	Dijkstra(1);

	if(dist[n]==-1) cout << -1 << endl;
	else cout << printPath(1,n) << endl;
}