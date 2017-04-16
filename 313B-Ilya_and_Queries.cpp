#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll n, m, ans;
string s;
ll a, b, c;
ll dp[10000];

int main() {
    cin >> s >> m;
    s = ' ' + s;
    n = s.length();

    int summedTable[n+1];

    summedTable[0] = 0;

    for(int i = 1; i < n+1; i++) {
        summedTable[i] = summedTable[i-1];
        if(s[i-1] == s[i]) {
            summedTable[i-1]++;
            summedTable[i]++;
        }
    }

    for(int i = 0; i < n+1; i++) {
//        cout << summedTable[i] << " ";
    }

    cout << endl;

    for(int i = 0; i < m; i++) {
        int l, r;
        cin >> l >> r;
        cout << summedTable[r-1] - summedTable[l-1] << endl;
    }


    return 0;
}
