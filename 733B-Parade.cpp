#include <bits/stdc++.h>

#define ll long long

using namespace std;

int n, ans;
string s;
vector<int> lr;

int main() {
	cin >> n;

	int original = 0;
	for(int i = 0; i < n; i++) {
		int l, r;
		cin >> l >> r;
		lr.push_back(l-r);
		original += l-r;
	}

	ans = max(original, -original);

	int col = 0;

	for(int i = 0; i < n; i++) {
		int current = original;
		current += 2*(-lr[i]);
		if(max(current, -current) > ans) {
			col = i+1;
			ans = max(current, -current);
		}
	}

	cout << col << endl;
}