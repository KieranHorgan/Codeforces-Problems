#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll n, ans;
map<string, ll> cnt;

int main() {
	cin >> n;
	string s;
	while(n--) cin >> s, cnt[s]++;
	for(auto i: cnt) ans = max(ans, i.second);
	cout << ans << endl;
}