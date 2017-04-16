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


ll n, ansL = 0, ansR = 0;

int main()
{
    cin >> n;
    ii points[n+1];
    REP(i, n+1) {
        int a, b;
        cin >> a >> b;
        points[i] = mp(a, b);
    }
    int turnsRight = 0, turnsLeft = 0;
    int i = 1;
    REPG(i, n) {
        if(points[i].first-points[i-1].first > 0) { //east
            if(points[i+1].first-points[i].first != 0) continue;
            else if(points[i+1].second-points[i].second > 0) {
                ansR++;
            } else {
                ansL++;
            }
        } else if(points[i].first-points[i-1].first < 0) { // west
            if(points[i+1].first-points[i].first != 0) continue;
            else if(points[i+1].second-points[i].second > 0) {
                ansL++;
            } else {
                ansR++;
            }
        } else if(points[i].second-points[i-1].second > 0) { // north
            if(points[i+1].second-points[i].second != 0) continue;
            else if(points[i+1].first-points[i].first > 0) {
                ansL++;
            } else {
                ansR++;
            }
        } else { // south
            if(points[i+1].second-points[i].second != 0) continue;
            else if(points[i+1].first-points[i].first > 0) {
                ansR++;
            } else {
                ansL++;
            }
        }
    }

    cout << min(ansL, ansR);

    return 0;
}
