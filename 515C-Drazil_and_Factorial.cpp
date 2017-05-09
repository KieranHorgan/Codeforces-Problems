#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	string s;
	cin >> n >> s;
	string nums[] = {"","","2","3","322","5","53","7","7222","7233"};
	string ans = "";
	for(int i = 0; i < n; i++) {
		ans+=nums[s[i]-'0'];
	}
	sort(ans.rbegin(), ans.rend());
	cout << ans << endl;
	return 0;
}