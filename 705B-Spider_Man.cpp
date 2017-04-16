#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define MAX 100000

typedef vector<int> vi;

ll n, m, ans;
string s;

int a[100005];
ll dp[MAX];
bool visited[MAX];
ll summedTable[MAX];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;


    cin >> a[0];
    summedTable[0] = a[0]-1;
    for(int i = 1; i < n; i++) {
        cin >> a[i];
        summedTable[i] = summedTable[i-1] + a[i]-1;
    }

    for(int i = 0; i < n; i++) {
        if(summedTable[i] == 0) cout << 2 << endl;
        else {
            if(summedTable[i] % 2 == 0) cout << 2 << endl;
            else cout << 1 << endl;
        }
    }

    return 0;
}

