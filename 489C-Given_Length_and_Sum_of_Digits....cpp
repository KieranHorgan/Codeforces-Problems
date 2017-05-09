#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	ll m, s;
	cin >> m >> s;
	if(s==0&&m!=1) {
		cout << -1 << " " << -1 << endl;
	} else if(s==0&&m==1) {
		cout << 0 << " " << 0 << endl;
	} else if(9*m<s) {
		cout << -1 << " " << -1 << endl;
	} else {
		string ans = "";
		ll sum = 0;
		while(ans.size()!=m) {
			if(s-sum==0) {
				ans+='0';
			} else if(s-sum>=9) {
				ans+='9';
				sum+=9;
			} else {
				ans+='0'+s-sum;
				sum+=s-sum;
			}
		}
		string ans2 = ans;
		reverse(ans2.begin(), ans2.end());
		if(ans2[0]=='0') {
			ans2[0]='1';
			int i;
			for(i = 1; ans2[i]=='0';i++);
			ans2[i]--;
		}
		cout << ans2 << " " << ans << endl;
	}
	return 0;
}