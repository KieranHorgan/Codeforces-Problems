#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll n, m, ans;
string s;
ll a, b, c;
ll dp[10000];

bool visited[100005];
int summedTable[100005];

int main() {
    cin >> n >> m;

    int a[n+2];
    summedTable[0] = 0;

    for(int i = 1; i <= n; i++) cin >> a[i];

    for(int i = n; i > 0; i--) {
        summedTable[i] = summedTable[i+1];
        if(!visited[a[i]]) {
            visited[a[i]]++;
            summedTable[i]++;
        }
    }

    for(int i = 0; i < m; i++) {
        int a;
        cin >> a;
        cout << summedTable[a] << endl;
    }

    return 0;
}
