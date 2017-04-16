#include <bits/stdc++.h>

#define ll long long

using namespace std;

ll n, k, ans;
vector<ll> a;
string s;

int main() {
	cin >> n;

	bool allZero = true;
	ll total = 0;

	for(int i = 0; i < n; i++) {
		ll x;
		cin >> x;
		a.push_back(x);
		total += x;
		if(x!=0) allZero = false;

	}

	if(allZero) {
		cout << "NO" << endl;
 		return 0;
	}

	if(total != 0) {
		cout << "YES\n1\n" << endl;
		cout << 1 << " " << n << endl;
		return 0;
	} else {
		cout << "YES" << endl;
		cout << "2" << endl;
		for(int i = n-1; i>0; i--) {
			if(a[i]!=0) {
				cout << 1 << " " << i << endl;
				cout << i+1 << " " << n << endl;
				return 0;
			}
		}
	}


}