#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl '\n'

ll n, x, ans, s[100005];
vector<ll> a;


int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	cin >> n;
	a.push_back(0);
	for(int i = 1; i <= n; i++) cin >> x, a.push_back(x);
	sort(a.begin(), a.end());
	x = 0;
	for(int i = 1; i <= n; i++) {
		s[i]=a[i]+s[i-1];
		ans = (s[i-1]-x>a[i]) ? ans : ans+1;
		if(s[i-1]-x>a[i]) x+=a[i];
	}
	cout << ans << endl;
}