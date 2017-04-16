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
    string a;
    cin >> a;
    int test = 0;
    if((int)a[0] < 96) test = 1;
    else test = 2;
    FOR(i, 1, a.length()-1)if(a[i] >= 96) test = 0;

    if(test==1) {
        REP(i, a.length()) cout << (char)(a[i]+32);
    } else if(test == 2) {
        cout << (char)(a[0] - 32);
        FOR(i, 1, a.length()-1) cout << (char)(a[i]+32);
    } else {
        cout << a;
    }
    return 0;
}
