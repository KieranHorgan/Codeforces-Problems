#include <bits/stdc++.h>

#define ll long long

using namespace std;

ll n, m, ans;
vector<ll> a;
string s;


int main() {
	cin >> n;

	for(int i = 0; i < n; i++) {
		ll x;
		cin >> x;
		a.push_back(x);
	}

	sort(a.begin(), a.end());




	for(int i = 2; i < n; i++) {
		if(a[i-2]+a[i-1] > a[i]) {
			cout << "YES" << endl;
			return 0;
		}
	}
	cout << "NO" << endl;

}