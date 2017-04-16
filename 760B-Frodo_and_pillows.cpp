#include <bits/stdc++.h>

#define ll long long

using namespace std;

ll n, m, k, ans;
vector<ll> a;
string s;

int main() {
	cin >> n >> m >> k;

	m-=n;
	ans = 1;

	ll i = 0;
	while(m>0) {
		ll l, r;
		l = min(i, k-1);
		r = min(i, n-k);
		if(i>k-1 && i>n-k) {
			ans+= m/(r+l+1);
			break;
		}
		if(m>=l+r+1) {
			ans++;
		}
		m-=r+l+1;
		i++;
	}

	cout << ans << endl;
}