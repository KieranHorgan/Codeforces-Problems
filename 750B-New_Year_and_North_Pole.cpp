#include <bits/stdc++.h>

#define ll long long

using namespace std;

ll n, ans;
string s;

int main() {
	cin >> n;

	int pos = 0;
	for(int i = 0; i < n; i++) {
		int x; 
		string d;
		cin >> x >> d;
		if(d[0] == 'S') pos-=x;
		else if(d[0] == 'N') pos+=x;
		else {
			if(pos == 0 || pos == -20000) {
				cout << "NO" << endl;
				return 0;
			}
		}
		if(pos<-20000) {
			cout << "No" << endl;
			return 0; 
		} else if(pos>0) {
			cout << "No" << endl;
			return 0; 
		}
	}

	if(pos == 0) cout << "YES" << endl;
	else cout << "NO" << endl;


}