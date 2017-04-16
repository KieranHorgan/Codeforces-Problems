#include <bits/stdc++.h>

#define ll long long

using namespace std;

int n, ans;
string s;

int main() {
	cin >> s;

	ans = 1;
	int cnt = 1;
	for(int i = 0; i < s.length(); i++) {
		if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'Y') {
			ans = max(ans, cnt);
			cnt = 1;
		} else {
			cnt++;
		}
	}
	ans = max(ans, cnt);
	cnt = 1;

	cout << ans << endl;
}