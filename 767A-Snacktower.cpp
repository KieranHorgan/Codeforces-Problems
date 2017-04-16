#include <bits/stdc++.h>

#define ll long long

using namespace std;

ll n, m, ans;
vector<ll> a;
string s;

int snacks[100005];

int main() {
	cin >> n;
	int nextSnack = n;
	for(int i = 1; i <= n; i++) {
		int x;
		cin >> x;
		snacks[x]=1;
		while(snacks[nextSnack]) {
			cout << nextSnack << " ";
			nextSnack--;
		}
		cout << endl;
	}
}