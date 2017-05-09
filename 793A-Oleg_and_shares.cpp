#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll n, m, ans, k;
ll a[100005];
ll t[100005];
int main() {
	cin >> n >> k;
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	ll mo = a[0]%k;
	ll times = a[0];
	for(int i = 1; i < n; i++) {
		if(a[i]%k!=mo) {
			cout << -1 << endl;
			return 0;
		}
		times = min(a[i], times);
	}
	ans = 0;
	for(int i = 0; i < n; i++) {
		ans+=(a[i]-times)/k;
	}
	cout << ans << endl;

}