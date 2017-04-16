#include <bits/stdc++.h>

#define ll long long

using namespace std;

ll n, m, ans;
string s, a, b, x, z;

void getTwoNames(string x) {
	for(int i = 0; i < x.size(); i++) {
		if(x[i]==' ') {
			a = x.substr(0,i);
			b = x.substr(i+1, x.size()-i-1);
			cout << a << " " << b << endl;
		}
	}
}

int main() {
	cin >> a >> b;
	cin >> n;
	for(int i = 0; i < n; i++) {
		cout << a << " " << b << endl;
		cin >> x >> z;
		if(x==a) a=z;
		else b=z;
	}
		cout << a << " " << b << endl;
}