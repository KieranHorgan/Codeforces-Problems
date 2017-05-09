#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	string s = "";
	while(s.size() < n) s+="aabb";
	while(s.size() > n) s.pop_back();
	cout << s << endl;
}