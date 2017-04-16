#include <bits/stdc++.h>

#define ll long long

using namespace std;

ll n, m, ans1, ans2;
string s;

int a[10];
int b[10];
deque<int> aOrder, bOrder;

int main() {
	cin >> n;

	for(int i = 0; i < n; i++) {
		char x;
		cin >> x;
		x-='0';
		a[x]++;
		aOrder.push_back(x);
	}
	for(int i = 0; i < n; i++) {
		char x;
		cin >> x;
		x-='0';
		b[x]++;
		bOrder.push_back(x);
	}

	sort(aOrder.begin(), aOrder.end());
	sort(bOrder.begin(), bOrder.end());

	for(int i = 0, j = 0; i < n && j < n;) {
		if(aOrder[i]<=bOrder[j]) {
			i++;
			j++;
			continue;
		} else {
			ans1++;
			j++;
		}
	}
	cout << ans1 << endl;

	for(int i = 0, j = 0; i < n && j < n;) {
		if(aOrder[i]<bOrder[j]) {
			ans2++;
			i++;
			j++;
			continue;
		} else {
			j++;
		}
	}
	cout << ans2 << endl;





}