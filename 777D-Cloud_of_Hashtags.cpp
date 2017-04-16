#include <bits/stdc++.h>

#define ll long long

using namespace std;

ll n, m, ans;
vector<ll> a;
string s;

vector<string> tags;

int daq(string a, string b, int i) {
	if(i==0) return 0;
	if(a[i] > b[i] && a[i-1] <= b[i]) {}
}

int compare(string a, string b) {
	int x = a.size(), y = b.size();
	int i;
	for(i = 0; i < x && i < y; i++) {
		if(b[i]>a[i]) return -1; // Sorted
		if(b[i]<a[i]) return i;
	}
	if(x>y) return y;
	return -1;
}

int main() {
	cin >> n;
	for(int i = 0; i < n; i++) {
		char c;
		cin >> c;
		string s;
		cin >> s;
		tags.push_back(s);
	}

	reverse(tags.begin(), tags.end());

	for(int i = 0; i < n; i++) {
		//cout << tags[i] << " ";
	}
	//cout << endl;

	for(int i = 1; i < n; i++) {
		int x = compare(tags[i], tags[i-1]);
		//cout << x << endl;
		if(x == -1) continue;
		else {
			tags[i] = tags[i].substr(0,x);
		}
	}

	for(int i = n-1; i >= 0; i--) {
		cout << "#" << tags[i] << endl;
	}
}