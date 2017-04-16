#include <bits/stdc++.h>

#define ll long long

using namespace std;

ll n, m, ans;
vector<ll> a;
string s;

int main() {
	cin >> n >> m;

	int a, b, c;
	a = 0; b = 0; c = 0;
	if(m==0) a=1;
	if(m==1) b=1;
	if(m==2) c=1;
	n%=6;

	for(int i = n; i > 0 ; i--) {
		if(i%2==0) {
			swap(b,c);
		} else {
			swap(a,b);
		}
	} 

	if(a==1) cout << 0 << endl;
	if(b==1) cout << 1 << endl;
	if(c==1) cout << 2 << endl;
}