#include <bits/stdc++.h>

#define ll long long

using namespace std;

int n, ans;
string s;
vector<int> lr;

int k2, k3, k5, k6;

int main() {
	cin >> k2 >> k3 >> k5 >> k6;
	while(k2 > 0 && k5 > 0 && k6 > 0) {
		ans += 256;
		k2--;
		k5--;
		k6--;
	}
	while(k2 > 0 && k3 > 0) {
		ans += 32;
		k2--;
		k3--;
	}
	cout << ans << endl;
}