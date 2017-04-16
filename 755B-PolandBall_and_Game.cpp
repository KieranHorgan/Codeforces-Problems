#include <bits/stdc++.h>

#define ll long long

using namespace std;

ll n, m, k, ans, same;
vector<string> a, b;
string s;

int main() {
	cin >> n >> m;

	for(int i = 0; i < n; i++) {
		cin >> s;
		a.push_back(s);
	}

	for(int i = 0; i < m; i++) {
		cin >> s;
		b.push_back(s);
	}

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			if(a[i]==b[j]) same++;
		}
	}

	bool turn = 1;
	while(same) {
		if(turn) 
			if(n<=0) {
				cout << "NO" << endl;
				return 0;
			}
		else
			if(m<=0) {
				cout << "YES" << endl;
				return 0;
			}
		
		n--;
		m--;
		same--;
		turn = !turn;
		
	}
	if(!turn) {
		if(m<=0) {
			cout << "YES" << endl;
			return 0;
		}
		m--;
		turn = !turn;

	}
	if(n<0) n=0;
	if(m<0) m=0;
	if(n>m) cout << "YES" << endl;
	else cout << "NO" << endl;


}