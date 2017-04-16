#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define MAX 100000

typedef vector<int> vi;

ll n, m, ans;
string s;
pair<int, int> a[105];

ll dp[MAX];
bool visited[MAX];
ll summedTable[MAX];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;

    string y = "I hate ", x = "I love ";

    for(int i = 0; i < n; i++) {
        if(i%2 == 0) {
            cout << y;
        } else {
            cout << x;
        }

        if(i == n-1) cout << "it";
        else cout << "that ";
    }

    return 0;
}
