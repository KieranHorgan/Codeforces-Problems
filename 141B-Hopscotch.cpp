#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

ll a, x, y;

ld ans = 1<<20;

int main() {
	cin >> a >> x >> y;
	if(y==0) {
		cout << -1 << endl;
		return 0;
	}

	if(y<a && y>0) {
		if(x>-abs((ld)a/2) && x<abs((ld)a/2)) {
			cout << 1 << endl;
		} else {
			cout << -1 << endl;
		}
	} else {
		ll temp = y;
		ll height = a;
		ll block = 2;
		while(height+(2*a) < y) {
			height+=2*a;
			block+=3;
		}

		if(x>-abs((ld)a/2) && x<abs((ld)a/2) && y > height && y<height+a) {
			cout << block << endl;
			return 0;
		}
		if(x>-a && x<0 && y > height+a && y<height+(2*a)) {
			cout << block+1 << endl;
			return 0;
		}
		if(x>0 && x<a && y > height+a && y<height+(2*a)) {
			cout << block+2 << endl;
			return 0;
		}


		cout << -1 << endl;
//		if(x>-abs((ld)a/2) && x<abs((ld)a/2)) {
	}
}