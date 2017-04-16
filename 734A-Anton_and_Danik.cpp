#include <bits/stdc++.h>

#define ll long long

using namespace std;

int n, ans;
string s;

int main() {
	cin >> n;
	cin >> s;

	for(int i = 0; i < n; i++) {
		if(s[i] == 'D') {
			ans++;
		}
	}

	if(ans == (double)n/2) cout << "Friendship" << endl;
	else if(ans > (double)n/2) cout << "Danik" << endl;
	else cout << "Anton" << endl;
}