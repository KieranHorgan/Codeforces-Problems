#include <bits/stdc++.h>

using namespace std;

long long n;

int main() {
	string s;
	cin >> s;
	bool toBreak = false;
	for(int i = 0; i < s.length(); i++) {
		if(s[i] != 'a') {
			for(int j = i; s[j] != 'a' && j < s.length(); j++) {
				char c = s[j];
				c = c-1;
				s[j] = c;
			}
			toBreak = true;
			break;
		}
	}

	if(!toBreak) {
		s[s.length()-1] = 'z';
	}

	cout << s << endl;

	return 0;
}