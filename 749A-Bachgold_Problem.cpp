#include <bits/stdc++.h>

#define ll long long

using namespace std;

int n, ans;
string s;

int main() {
	cin >> n;

	cout << n/2 << endl;
	if(n%2 == 1) {
		cout << 3 << " ";
		n-=3;
	} else {
		cout << 2 << " ";
		n-=2;
	}

	while(n > 0) {
		cout << "2 ";
		n-=2;
	}
}