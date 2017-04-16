#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll n, m, ans;
string s;
pair<int, int> a[105];
ll dp[10000];

bool visited[100005];
int summedTable[100005];

int main() {
    cin >> n;

    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;

        a[i] = {x, i};
    }

    sort(a, a+n);

    for(int i = 0; i < n/2; i++) {
        cout << a[i].second+1 << " " << a[n-(i+1)].second+1 << endl;
    }


    return 0;
}
