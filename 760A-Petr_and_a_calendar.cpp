#include <bits/stdc++.h>

#define ll long long

using namespace std;

ll n, k, d, ans;
vector<ll> a;
string s;

int m[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main() {
	cin >> n >> d;
	n--;

	int x = m[n];
	int y = (8-d)%7;
	if(d>1) {
		ans++;
		x-=y;
	}

	if(x>4*7) {
		cout << ans+5 << endl;

	} else {
		cout << ans+4 << endl;
	}


}