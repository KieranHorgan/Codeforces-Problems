#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define endl "\n"

int n, m, k, ans=10000000;
string s;

ll distance[1000];
int a[1000];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m >> k;
	for(int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for(int i = m-1; i > 0; i--) {
		if(a[i]==0) continue;
		if(a[i]<=k) ans = min(ans, (m-i)*10);
	}
	for(int i = m+1; i <= n; i++) {
		if(a[i]==0) continue;
		if(a[i]<=k) ans = min(ans, (i-m)*10);
	}



	cout << ans << endl;
}