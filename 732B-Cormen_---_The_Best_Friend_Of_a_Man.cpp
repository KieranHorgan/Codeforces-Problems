#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	ll n, k;
	ll a[100005];
	cin >> n >> k;
	for(int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	ll ans = 0;
	for(int i = 1; i < n; i++) {
		if(a[i]+a[i+1]<k) {
			ans+=k-(a[i]+a[i+1]);
			a[i+1]+=k-(a[i]+a[i+1]);
		}
	}
	
	cout << ans << endl;
	for(int i = 1; i <= n; i++)
		cout << a[i] << " ";
	cout << endl;
	return 0;
}