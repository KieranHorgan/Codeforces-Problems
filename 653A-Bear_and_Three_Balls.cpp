#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    bool possible = false;
    int n;
    cin >> n;
    
    int t[n];
    for(int i = 0; i < n; i++) cin >> t[i];
    
    sort(t, t+n);
    for(int i = 0; i < n; i++) {
        int cnt = 1;
        for(int j = i+1; j < n && cnt < 3; j++) {
            if(t[j] == t[j-1]) continue;
            if(t[j] > t[j-1]+1) break;
            if(t[j] == t[j-1]+1) cnt++;
        }
        if(cnt >= 3) {
            possible = true;
            break;
        }
    }
    if(possible) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
