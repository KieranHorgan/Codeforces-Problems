#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll n, m, ans;
string s;
pair<int, int> a[105];
ll dp[10000];

map<int, int> rows;
map<int, int> cols;

int rCnt, cCnt;

bool visited[100005];
int summedTable[100005];

int main() {
    cin >> n >> m;

    ans = n*n;

    for(int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        x--; y--;

        int out = 0;

        if(rows[x] != 1) {
            rCnt++;
        }
        if(cols[y] != 1) {
            cCnt++;
        }
        if(cols[y] != 1 && rows[x] != 1) {
            ans--;
        }


        if(rows[x] != 1) {
            rows[x] = 1;

            //cout << out << " += " << n << " - " << cCnt << endl;
            out += n - cCnt;
        }
        if(cols[y] != 1) {
            cols[y] = 1;

            //cout << out << " += " << n << " - " << rCnt << endl;
            out += n - rCnt;
        }
        ans -= out;

        cout << ans << endl;
    }


    return 0;
}
