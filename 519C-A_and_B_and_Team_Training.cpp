#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl '\n'

ll n, a, b, ans;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	cin >> a >> b;

	while(a && b && a>b)
		ans++, a-=2, b-=1;

	while(a && b && a<b)
		ans++, a-=1, b-=2;

	while(a>=3 && b>=3)
		ans+=2, a-=3, b-=3;

	if((a&&b>1)||(a>1&&b))
		ans++;
	cout << ans << endl;
}