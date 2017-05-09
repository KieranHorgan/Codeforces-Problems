#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl '\n'

ll n, m, x, k, ans;
ll s[500005], c[500005];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	cin >> n;
	for(int i = 1; i<=n; i++) cin >> x, s[i]=s[i-1]+x;

	if(s[n]%3) {
		cout << 0 << endl;
		return 0;
	}
	ll m = s[n]/3;

	for(int i = n; i > 1; i--)
		c[i] = c[i+1]+(s[n]-s[i-1]==m);
	for(int i = 1; i <= n-2; i++) {
		if(s[i]==m)
			ans+=c[i+2];
	}
	cout << ans << endl;
}