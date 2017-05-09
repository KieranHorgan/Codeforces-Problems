#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl '\n'

ll n, a, b, ans;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	cin >> n;
	vector<pair<ll,ll>> days;
	for(int i = 0; i < n; i++) cin >> a >> b, days.push_back({a,b});
	sort(days.begin(), days.end());

	ll mi = days[0].second;
	for(int i = 1; i < n; i++) mi = (days[i].second>=mi) ? days[i].second : days[i].first;
	cout << mi << endl;
}