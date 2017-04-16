#include <bits/stdc++.h>

using namespace std;

long long a, b, c, ans;
int main()
{
    cin >> a >> b >> c;
		
		a*=4;
		b*=2;
		ans=min(a, min(b, c))/4;

cout << ans + (ans*2) + (ans*4);
}
