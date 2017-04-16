#include <bits/stdc++.h>

#define ll long long

using namespace std;

int x1, x2, x3, y1, y2, y3;

int main() {
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

	cout << 3 << endl;

	if((x1==x2&&y1==y3)||(x1==x3&&y1==y2)) {
		swap(x1, x2);
		swap(y1, y2);
	} else if((x3==x2&&y3==y1)||(x3==x1&&y3==y2)) {
		swap(x3, x2);
		swap(y3, y2);
	}

	cout << x3+(x2-x1) << " " << y3+(y2-y1) << endl;
	cout << x1+(x2-x3) << " " << y1+(y2-y3) << endl;
	cout << x1+(x3-x2) << " " << y1+(y3-y2) << endl;


}