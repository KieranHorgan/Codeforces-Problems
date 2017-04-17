#include <bits/stdc++.h>
#include <time.h>

#define ll long long
#define endl "\n"

using namespace std;

ll n, m, k, ans;
vector<ll> a;
string s;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m; 

	for(ans = 0; n <= m; ans++, n*=3, m*=2);



	cout << ans << endl;
}