#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double


int main() {
	ll x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2  >> y2;

	ld m1 = abs((ld)(y2-y1)/(x2-x1));
	ld c1 = y1-(m1*x1);

	ll n;
	cin >> n;
	ll ans = 0;
	while(n--) {
		ll a, b, c;
		cin >> a >> b >> c;
		ll i = a*x1 + b*y1 + c;
		ll j = a*x2 + b*y2 + c;
		if(min(i,j) <0 && max(i, j)>0) ans++;
	}
	cout << ans << endl;
}