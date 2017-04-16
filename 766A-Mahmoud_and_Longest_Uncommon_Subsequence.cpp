#include <bits/stdc++.h>

#define ll long long

using namespace std;

ll n, m, ans;
vector<ll> s;
string a, b;


int main() {
	cin >> a >> b;
	if(a == b) cout << -1 << endl;
	else {
		cout << max(a.length(), b.length()) << endl;
	}

}