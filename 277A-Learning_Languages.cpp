#include <bits/stdc++.h>

using namespace std;

#define ll long long

class UnionFind {
private:
	vector<ll> parent, sz;
	ll numberOfComponents;

public:
	UnionFind(ll N) {
		numberOfComponents=N;
		sz.assign(N, 1);
		parent.assign(N, 0);
		for(int i = 0; i < N; i++) parent[i] = i;
	}
	ll findSet(ll i) {
		if(i!=parent[i])
			return parent[i] = findSet(parent[i]);
		return i;
	}
	bool isSameSet(ll i, ll j) { return findSet(i) == findSet(j); }
	void mergeSet(ll i, ll j) {
		ll x = findSet(i);
		ll y = findSet(j);
		if(x==y) return;
		if(sz[x] < sz[y]) swap(x,y);
		parent[y] = x;
		sz[x]+= sz[y];
		numberOfComponents--;
	}
	ll count() { return numberOfComponents; }
};

int main() {
	ll n, m;
	cin >> n >> m;
	UnionFind UF = UnionFind(n);

	vector<ll> languages[m];

	bool noLan = 1;

	for(int i = 0; i < n; i++) {
		ll k;
		cin >> k;
		for(int j = 0; j < k; j++) {
			noLan=0;
			ll x;
			cin >> x;
			x--;
			for(int z = 0; z < languages[x].size(); z++) {
				UF.mergeSet(i, languages[x][z]);
			}
			languages[x].push_back(i);
		}


	}
	if(noLan) cout << n << endl;
	else cout << UF.count()-1 << endl;
}