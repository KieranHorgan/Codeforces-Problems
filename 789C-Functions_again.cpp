#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll n, m, ans;
string s;

ll a[100005], dp[100005];
ll o[100005], e[100005];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> a[i];
		if(i>0) dp[i-1] = abs(a[i-1]-a[i]);
	}
	
	for(int i = 0; i < n; i++) {
		//cout << dp[i] << " ";
	}
	
	//cout << endl;
	
	for(int i = 1; i < n; i++) {
		ll c;
		if(i%2==0)
			c=dp[i-1];
		else 
			c=-dp[i-1];
		
		e[i] = max(e[i-1]+c, c);
		ans = max(ans, e[i]);
		//cout << e[i] << " ";
	}
	//cout << endl;
	
	for(int i = 1; i < n; i++) {
		ll c;
		if(i%2==1)
			c=dp[i-1];
		else 
			c=-dp[i-1];
		
		o[i] = max(o[i-1]+c, c);
		ans = max(ans, o[i]);
		//cout << o[i] << " ";
	}
	//cout << endl;
	
	
	cout << ans << endl;
}
