#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int n, ans = 0;
vector<int> p;

int main()
{
    cin >> n;

    p.resize(n+1);
    for(int i = 1; i <= n; i++) cin >> p[i];

    for(int i = 1; i <= n; i++) {
        int x = 1;
        for(int j = i; p[j] != -1; x++) j = p[j];
        ans = max(ans, x);
    }

    cout << ans << endl;
    return 0;
}
