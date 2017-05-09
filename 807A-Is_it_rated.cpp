#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl '\n'

ll n, m, x, k, ans;
string s;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	cin >> n;
	bool change = false, is = 0;

	m = 4200;
	for(int i = 0; i < n; i++) {
		cin >> k >> x;
		if(k!=x) change=1, is=1;
		if(k>m) is = 1;
		m = min(m, k); 
	}

	if(is&&change) cout << "rated" << endl;
	else if(is) cout << "unrated" << endl;
	else cout << "maybe" << endl;
}