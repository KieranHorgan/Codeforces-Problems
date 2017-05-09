#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double

ll n, k, a, ans;
map<ll,ll> fnum, snum;

int main() {
	cin >> n >> k;
	while(n--) {
		cin >> a;
		if((ld)a/k/k == a/k/k) ans+=snum[a/k];
		if((ld)a/k == a/k) snum[a]+=fnum[a/k];
		fnum[a]++;
	}
	cout << ans << endl;
}