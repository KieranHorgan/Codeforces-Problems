#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll ans = 0, bToTheR = 0, MOD = 1'000'000'007;
int main() {
	string s;
	cin >> s;
	for(int i = s.size()-1; i >= 0; i--) {
		if(s[i]=='b')
			bToTheR++;
		else {
			ans+=bToTheR;
			bToTheR*=2;
		}
		ans%=MOD;
		bToTheR%=MOD;
	}

	cout << ans << endl;
}