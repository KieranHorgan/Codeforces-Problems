#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    int f[m];
    
    for(int i = 0; i < m; i++) cin >> f[i];
    
    sort(f, f+m);
    
    int ans = f[n-1] - f[0];
    for(int i = 1; (i+n-1) < m; i++) ans = min(ans, f[i+n-1] - f[i]);

    cout << ans;

    return 0;
}