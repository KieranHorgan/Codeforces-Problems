#include <bits/stdc++.h>
#include <time.h>

#define ll long long
#define endl "\n"

using namespace std;

ll n, m, q, ans;
vector<ll> a;
string s;

int z[100005];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	for(int i = 0; i < 2*n; i++) {
		int x;
		cin >> x;
		z[x]++;
		if(z[x]==2) {
			m--;
		} else {
			m++;
			ans = max(ans, m);
		}
	}

	cout << ans << endl;
}