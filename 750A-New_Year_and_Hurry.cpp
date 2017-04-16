#include <bits/stdc++.h>

#define ll long long

using namespace std;

ll n, k, ans;
string s;

int main() {
	cin >> n >> k;

	int x = 240-k;

	int i;
	for(i = 0; i <= n; i++) {
		x-=i*5;
		if(x<0) {
			break;
		}
	}
	i--;

	cout << i << endl;

}