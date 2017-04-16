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

#define inf                             10e9]
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

ll n;
vector<ll> a, b;

int main() {
    cin >> n;

    REP(i, n) {
        int x;
        cin >> x;
        a.pb(x);
        b.pb(x);
    }

    sort(b.begin(), b.end());

    REP(i, n) {
        while(a[i] != b[i]) {
            FOR(j, i+1, n) {
                if(a[j] == b[i]) {
                    while(a[i] != b[i]) {
                        swap(a[j], a[j-1]);
                        cout << j << " " << j+1 << endl;
                        j--;
                    }
                }
            }
        }
    }

    return 0;
}
