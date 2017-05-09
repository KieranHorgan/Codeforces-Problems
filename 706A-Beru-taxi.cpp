#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

ll a, b, n;

ld ans = 1<<20;

int main() {
	cin >> a >> b >> n;



	for(int i = 0; i < n; i++) {
		ld x, y, v;
		cin >> x >> y >> v;
		ld d = hypot(a-x, b-y);
		ans = min(ans, d/v);
	}
	cout << setprecision(10) << endl;
	cout << fixed << ans << endl;
}