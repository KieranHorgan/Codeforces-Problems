#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll n, m, ans;
string s;

int main() {
	cin >> s;
	for(int i = 0; i < s.length()-1; i++) {
		if(s[i]=='V' && s[i+1]=='K') {
			ans++;
			s[i]='0';
			s[i+1]='0';
		}
	}

	for(int i = 0; i < s.length()-1; i++) {
		if((s[i]=='V' && s[i+1]=='V')||(s[i]=='K' && s[i+1]=='K')) {
			ans++;
			break;
		}
	}
	cout << ans << endl;
}