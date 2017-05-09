#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

char c;
ll h, m;
ld ha, ma;

int main() {
	cin >> c;
	h+=10*(c-'0');
	cin >> c;
	h+=c-'0';
	cin >> c;
	cin >> c;
	m+=10*(c-'0');
	cin >> c;
	m+=c-'0';

	h%=12;

	ld H = (ld)h+((ld)m/60);

	ma = 360*((ld)m/60);
	ha = 360*((ld)H/12);

	cout << ha << " "<< ma << endl;
}