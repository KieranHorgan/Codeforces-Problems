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


ll n, m, d, ans = 0;

int main()
{
    cin >> n >> m >> d;
    vi nums;
    int modulo, t;
    cin >> t;
    modulo=t%d;
    nums.pb(t/d);
    REP(i, n*m-1) {
        cin >> t;
        if(t%d!=modulo) {
            cout << -1;
            return 0;
        }
        nums.pb(t/d);
    }
    sort(nums.begin(), nums.end());

    int x = nums[((n*m))/2];
    REP(i, n*m) {
        if(nums[i]<x) {
//            cout << ans << " += " << x << "-" << nums[i] << endl;
            ans += x-nums[i];
        } else {
//            cout << ans << " += " << nums[i] << "-" << x << endl;
            ans += nums[i]-x;
        }
    }

    cout << ans;

    return 0;
}
