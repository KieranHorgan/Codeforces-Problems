#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll n, m, ans;
string s, x, y, z;

int main() {
	cin >> x >> y;
	z = y;
	for(int i = 0; i < x.length(); i++) {
		if(x[i]<y[i]) {
			cout << -1 << endl;
			return 0;
		}
	}
	cout << z << endl;
}