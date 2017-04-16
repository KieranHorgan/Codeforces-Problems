#include <bits/stdc++.h>

#define ll long long

using namespace std;

ll n;
double ans;
vector<ll> dimensions[3];
pair<double, double> ansP;

map<pair<double, double>, pair<pair<double, double>, pair<double, double>>> mp;

int main() {
	cin >> n;

	for(double i = 0; i < n; i++) {
		ll a, b, c;
		cin >> a >> b >> c;
		vector<ll> temp = {a, b, c};
		sort(temp.begin(), temp.end());
		a = temp[0]; b = temp[1]; c = temp[2];
		dimensions[0].push_back(temp[0]);
		dimensions[1].push_back(temp[1]);
		dimensions[2].push_back(temp[2]);
		
		if((double)temp[0]/2 > ans) {
			ans = (double)temp[0]/2;
			ansP = {i, -1};
		}

		if(mp[{b,c}].first.first < mp[{b,c}].second.first) {
			if(a > mp[{b,c}].first.first) {
				mp[{b,c}].first = {a, i};
			}
		} else {
			if(a > mp[{b,c}].second.first) {
				mp[{b,c}].second = {a, i};
			}
		}
	}

	for(double i = 0; i < n; i++) {
		double a, b, c;
		a = dimensions[0][i];
		b = dimensions[1][i];
		c = dimensions[2][i];

		
		if(ans < min(c/2, min(b/2, (mp[{b, c}].first.first + mp[{b, c}].second.first)/2))) {
			ans = min(c/2, min(b/2, (mp[{b, c}].first.first + mp[{b, c}].second.first)/2));
			ansP = {mp[{b, c}].first.second, mp[{b, c}].second.second};
		}
	}

	if(ansP.second == -1) {
		cout << 1 << endl;
		cout << ansP.first+1 << endl;
	} else {
		cout << 2 << endl;
		cout << ansP.first+1 << " " << ansP.second+1 << endl;
	}
}