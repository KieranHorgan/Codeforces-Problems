#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll n, m, ans;
vector<int> a;
string s;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	
	for(int i = 0; i < n; i++) {
		int x;
		cin >> x;
		int c = 0;
		if(x%m!=0) {
			c++;
		}
		c+=x/m;
		ans+=c;
	}
	
	
	
	if(ans%2==0) {
	
		cout << ans/2 << endl;
		} else {
			cout << ans/2+1 << endl;
		}
}
