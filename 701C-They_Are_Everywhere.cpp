#include <bits/stdc++.h>

using namespace std;

#define ll long long

int n, m, ans, amount, cnt;
string s;
pair<int, int> a[105];
//ll dp[10000];

map<char, int> types;
map<char, int> coun;
vector<char> flats;

int rCnt, cCnt;

//bool visited[100005];
//int summedTable[100005];

int main() {
    cin >> n;

    ans = 10e7;

    for(int i = 0; i < n; i++) {
        char c;
        cin >> c;
        if(types[c] != 1) {
            amount++;
            types[c] = 1;
        }

        coun[c] = 0;

        flats.push_back(c);
    }

    int i, start;
    for(i = 0, start = 0; i < n; i++) {
//            cout << start << " " << flats[i] << " " << flats[start] << endl;

        coun[flats[i]]++;
        if(types[flats[i]] == 1) {
            cnt++;
            types[flats[i]] = 2;
        }

        while(coun[flats[start]] > 1) {
            coun[flats[start]]--;
            start++;
        }

        if(cnt == amount) {
            ans = min(ans, (i+1) - start);
        }
    }

//    cout << i << " " << start << endl;
    cout << ans << endl;

    return 0;
}
