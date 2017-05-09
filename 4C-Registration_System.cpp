#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	map<string,int> names;
	while(n--) {
		string s;
		cin >> s;
		if(!names[s])
			cout << "OK" << endl;
		else
			cout << s << names[s] << endl;
		names[s]++;
	}
	return 0;
}