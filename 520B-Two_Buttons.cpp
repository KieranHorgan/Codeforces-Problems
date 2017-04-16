#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, m, ans = 0;
    cin >> n >> m;

    while( n < m) {
        if(m % 2 == 0)
            m = m/2;
        else m++;

        ans++;
    }

    ans += n - m;

    cout << ans << endl;
    return 0;
}
