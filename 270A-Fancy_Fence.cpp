#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll t,  m;
vector<pair<ll,ll>> shapes;
bool angles[10000];

ll a[10000];

int main() {
	cin >> t;
	for(int i = 0; i < t; i++) {
		cin >> a[i];
		m = max(a[i], m);
	}


	ll s = 3, angle = 180;
	while(((double)angle / s <= m)) {
		if(angle%s==0) {
			angles[angle/s] = 1;
		}
		s++;
		angle+=180;
	}

	for(int i = 0; i < t; i++) {
		if(angles[a[i]]) {
			cout << "YES" << endl;
		} else {

			cout << "NO" << endl;
		}
	}


}