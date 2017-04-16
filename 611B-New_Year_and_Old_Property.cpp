#include <iostream>
#include <stdio.h>
using  namespace std ;

typedef long long ll;

ll a, b, ans = 0;

void check(ll n, ll test)
{
    if (n > b) return;
    if (n >= a && n <= b && test == 1 ) ans++;

    check(n * 2 + 1 , test);
    if (test == 0 ) check(n * 2 , 1 );
}

int main ()
{
    cin >> a;
    cin >> b;

    check(1, 0);

    cout << ans << endl ;
}
