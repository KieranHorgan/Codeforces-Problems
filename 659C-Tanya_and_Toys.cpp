#include <bits/stdc++.h>
#include <sstream>

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


ll n, m, ans = 0;

int main()
{
    stringstream zout;
    cin >> n >> m;
    int has[n];
    REP(i, n) {
        cin >> has[i];
    }
    sort(has, has+n);
    int i = 1;
    int index = 0;
    while(m>0) {
        if(has[index]!=i) {
            if(m-i<0) break;
            ans++;
            zout << i << " ";
            m-=i;
        } else {
            index++;
        }
//        cout << m << endl;
        i++;
    }
    cout << ans << endl << zout.str();

    return 0;
}
