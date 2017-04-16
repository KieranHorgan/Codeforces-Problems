#include <bits/stdc++.h>

using namespace std;

string s;
long long a, b, c, n;
string ans;
int main()
{
	cin >> n >> s;
	if(n%2==1) {
		for(int i = 0; i < n; i++) {
			if(i%2==0) {
				ans = ans + s[i];
			} else {
				ans = s[i] + ans;
			}
		}
	} else {
		for(int i = 0; i < n; i++) {
			if(i%2==1) {
				ans = ans + s[i];
			} else {
				ans = s[i] + ans;
			}
		}
	}
cout << ans;
}