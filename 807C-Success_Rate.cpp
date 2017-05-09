#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 1ll<<60

string s;

int main() {
	ll t;
	cin >> t;
	
	while(t--) {
		ll x, y, p, q, ans=INF;
		cin >> x >> y >> p >> q;
		ll P = p, Q = q;

		ll lo = 0, hi = 2000000000;
		for(int i = 0; i < 100; i++) {
			ll mid = (lo+hi)/2;
			q = Q*mid;
			p = P*mid;
			if(q>=y && p>=x && (p-x<=q-y)) {
				hi = mid;
				ans = q-y;
			} else
				lo = mid;
		}
		
		if(ans==INF) cout << -1 << endl;
		else cout << ans << endl;
	}

}