#include <bits/stdc++.h>

using namespace std;

long long n, a;
vector<long long> x;

int main() {
	cin >> n >> a;
	for(int i = 0; i < n; i++) {
		int y;
		cin >> y;
		x.push_back(y);
	}

	sort(x.begin(), x.end());

	if(n == 1) {
		cout << 0 << endl;
		return 0;
	}

	long long left = (a-x[0]) + (x[n-2]-x[0]);
	long long left1 = (x[n-2]-a) + (x[n-2]-x[0]);
	left = min(left, left1);
	if(a >= x[n-2]) left = a - x[0];
	if(a <= x[0]) left = x[n-2] - a;

	long long right = (a-x[1]) + (x[n-1]-x[1]);
	long long right1 = (x[n-1]-a) + (x[n-1]-x[1]);
	right = min(right, right1);
	if(a <= x[1]) right = x[n-1] - a;
	if(a >= x[n-1]) right = a-x[1];

	
	cout << min(left, right) << endl;


	return 0;
}

/*
91 25

19 15 20 12 18 11 18 12 20 11 16 18 13 11 11 13 13 14 15 16 13 11 13 19 15 13 10 15 10 12 13 11 18 11 14 10 11 11 20 14 11 11 14 10 14 19 13 16 19 12 18 18 14 15 10 14 16 11 11 14 12 14 14 20 16 15 17 17 12 15 12 15 20 16 10 18 15 15 19 18 19 18 12 10 11 15 20 20 15 16 15
*/