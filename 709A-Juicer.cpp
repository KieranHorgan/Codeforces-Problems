#include <bits/stdc++.h>

using namespace std;

long long n, b, d;

int main() {

	cin >> n >> b >> d;
	int a[n];

	for(int i = 0; i < n; i++) cin >> a[i];

	int ans = 0;
	for(int i = 0, waste = 0; i < n; i++) {
		if(a[i] <= b) {
			waste+=a[i];
			if(waste>d) {
				ans++;
				waste = 0;
			}
		}
	}

	cout << ans << endl;


	return 0;
}