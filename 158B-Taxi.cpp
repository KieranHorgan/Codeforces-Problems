#include <bits/stdc++.h>

using namespace std;

// Shortcuts for "common" data types in contests
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

// Loops
#define REP(i,n)                        for(int i=0;i<(n);i++)
#define REPG(i,n)                       for(i=0;i<(n);i++)
#define FOR(i,a,b)                      for(int i=(a);i<=(b);i++)
#define FORD(i,a,b)                     for(int i=(a);i>=(b);i--)

#define inf                             1000000000 // 1 billion, safer than 2B for Floyd Warshall’s
#define mod                             1000000007
#define pb                              push_back
#define mp                              make_pair

// Some common useful functions
#define sqr(x)                          ((x)*(x))
#define rnd(d)                          (int)((double)d + 0.5)
#define sz(x)                           ((int)(x).size())
#define rite(x)                         freopen(x,"w",stdout);
#define read(x)                         freopen(x,"r",stdin);
#define vecIsPresent(vec, x)            find(vec.begin(), vec.end(), x) != vec.end();


ll n, ans = 0;

int main()
{
    cin >> n;
    int inp[n];
    int cnt[4];
    cnt[3] = 0;
    cnt[2] = 0;
    cnt[1] = 0;

    REP(i, n) {
        cin >> inp[i];
        if(inp[i] == 4) ans++;
        else cnt[inp[i]]++;
    }
    sort(inp, inp+n);
    while(cnt[3] && cnt[1]) {
        cnt[3]--;
        cnt[1]--;
        ans++;
    }
    while(cnt[3]>0) {
        cnt[3]--;
        ans++;
    }
    while(cnt[2]>1) {
        ans++;
        cnt[2]-=2;
    }
    while(cnt[1] > 3) {
        ans++;
        cnt[1]-=4;
    }
    while(cnt[2] && cnt[1]>1){
        ans++;
        cnt[2]--;
        cnt[1]-=2;
    }
    if(cnt[2] && cnt[1]) ans++;
    else if(cnt[1]) ans++;
    else if(cnt[2]) ans++;
    cout << ans << endl;

    return 0;
}
