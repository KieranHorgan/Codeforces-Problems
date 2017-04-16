#include <bits/stdc++.h>

#define ll long long

using namespace std;

ll n, k, ans, cnt;
vector<ll> a;
string s;

map<int, bool> used;

int main() {
	cin >> n;

	for(int i = 0; i < n; i++) {
		int x;
		cin >> x;
		if(x==i+1) {
			ans++;
		} else {
			if(!used[x]) {
				used[x] = true;
				cnt++;
				if(cnt%2==0) ans++;
			}
		}
	}

	cout << ans << endl;
}