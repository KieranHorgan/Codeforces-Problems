
 #include <bits/stdc++.h>

#define ll long long

using namespace std;

ll n, m, ans;
vector<ll> a;
string s;

int colors[100005][50];

int main() {
	cin >> n;

	int c;
	for(int i = 2; i <= n+1; i++) {
		for(int j = 1; j < 50; j++) {
			if(!colors[i][j]) {
				a.push_back(j);
				c = j;
				break;
			}
		}
		ans = max(ans, a[a.size()-1]);
		if(c==1) {
			for(int j = i+i; j <= n+1; j+=i) {
				colors[j][c] = 1;
			}
		}
	}
	cout << ans << endl;
	for(int i = 0; i < a.size(); i++) {
		cout <<  a[i] << " ";
	}

	cout << endl;
}