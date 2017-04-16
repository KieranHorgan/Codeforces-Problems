#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll n, m, ans;
string s;
ll a, b, c;
ll dp[10000];

int main() {
    cin >> s;

    int cnt = 0;

    vector<int> abpos;
    vector<int> bapos;

    for(int i = 0; i < s.length()-1; i++) {
        if(s[i] == 'A' && s[i+1] == 'B') {
            abpos.push_back(i);
        } else if(s[i] == 'B' && s[i+1] == 'A') {
            bapos.push_back(i);
        }
    }

    for(int i = 0; i < abpos.size(); i++)
        for(int j = 0; j < bapos.size(); j++)
            if(abpos[i] - bapos[j] != -1 && abpos[i] - bapos[j] != 1) {cout << "YES" << endl; return 0;}


    cout << "NO" << endl;
    return 0;
}
