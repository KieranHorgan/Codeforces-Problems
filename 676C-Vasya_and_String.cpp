#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll n, k;
string s;

int main() {
	cin >> n >> k;
	cin >> s;

	ll ans = 1;

	for(ll l = 0, r = 0, numOfOpp = (s[0]=='a'); l < n && r < n; l++) {
		if(r<l) r = l, numOfOpp = (s[l]=='a');
		//cout << l << " " << r << " " << numOfOpp << endl;

		while(numOfOpp <= k) {
			r++;
			if(r==n) break;
			if(s[r]=='a') numOfOpp++;
			if(numOfOpp==k+1) {
				//cout << "\\w:" << s[r] << " " << l << " " << r << " " << numOfOpp << endl;
				r--;
				numOfOpp--;
				break;
			}
			//cout << l << " " << r << " " << numOfOpp << endl;
		}
		if(r==n) {
			ans = max(ans, --r-l+1);
			break;
		}
		ans = max(ans, r-l+1);
		//cout << l << " " << r << " " << numOfOpp << endl;
		if(s[l]=='a') numOfOpp--;
	}

	//cout << endl;

	for(ll l = 0, r = 0, numOfOpp = (s[0]=='b'); l < n && r < n; l++) {
		if(r<l) r = l, numOfOpp = (s[l]=='b');
		//cout << l << " " << r << " " << numOfOpp << endl;

		while(numOfOpp <= k) {
			r++;
			if(r==n) break;
			if(s[r]=='b') numOfOpp++;
			if(numOfOpp==k+1) {
				r--;
				numOfOpp--;
				break;
			}
			//cout << l << " " << r << " " << numOfOpp << endl;
		}
		//cout << l << " " << r << " " << numOfOpp << endl;
		if(r==n) {
			ans = max(ans, --r-l+1);
			break;
		}
		ans = max(ans, r-l+1);
		//cout << l << " " << r << " " << numOfOpp << endl;
		if(s[l]=='b') numOfOpp--;
	}


	
	cout << ans << endl;
}