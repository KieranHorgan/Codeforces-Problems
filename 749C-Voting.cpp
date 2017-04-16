#include <bits/stdc++.h>

#define ll long long

using namespace std;

int n;
string s;

char ans;
int dsToRemove, rsToRemove;

int winner;

int rs, ds;

int main() {
	cin >> n >> s;

	for(int i = 0; i < s.length(); i++) {
		if(s[i]=='R') rs++;
		else ds++;
	}

	while(winner == 0) {
		for(int i = 0; i < s.length(); i++) {
			if(s[i]=='D') {
				if(dsToRemove>0) {
					dsToRemove--;
					s[i] = '0';
					ds--;
					continue;
				}
				rsToRemove++;

			} else if(s[i]=='R') {
				if(rsToRemove>0) {
					rsToRemove--;
					s[i] = '0';
					rs--;

					continue;
				}
				dsToRemove++;
			}
		}
		if(ds==0) {
			cout << 'R' << endl;
			break;
		} else if(rs==0) {
			cout << 'D' << endl;
			break;
		}
	}


	return 0;
}