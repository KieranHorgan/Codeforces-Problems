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


ll n, d, h, ans = 0;

int main()
{
    ios_base::sync_with_stdio(0);

    cin >> n >> d >> h;

    if(h*2 < d || (d+h==2 && n!=2)) {
        cout << -1 << endl;
    } else if(h==d && n-1!=h) {
        int cnt = 0;
        if(n==2) cout << -1 << endl;
        else
            FOR(i, 1, n-1) {
                if(cnt < h) {
                    cout << i << " " << i+1 << endl;
                    cnt++;
                } else {
                    cout << 2 << " " << i+1 << endl;
                }
            }
    } else {
        int cnt = 0;
        FOR(i, 1, n-1) {
            if(cnt < h) {
                cout << i << " " << i+1 << endl;
                cnt++;
            } else if(cnt == h) {
                cout << 1 << " " << i+1 << endl;
                cnt++;
            } else if(cnt < d) {
                cout << i << " " << i+1 << endl;
                cnt++;
            } else {
                cout << 1 << " " << i+1 << endl;
            }
        }
    }
    return 0;
}
