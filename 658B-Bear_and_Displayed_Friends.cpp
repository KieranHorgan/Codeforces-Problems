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


ll n, k, q, ans = 0;

int main()
{
    ios_base::sync_with_stdio(0);

    cin >> n >> k >> q;
    ll t[n], type[q], id[q], cnt = 0;
    bool online[n];
    vi onlineIndexes;
    REP(i, n) {cin >> t[i]; online[i] = false;}
    REP(i, q) {
        cin >> type[i] >> id[i];
        if(type[i] == 1) {
            online[id[i]-1] = true;
            onlineIndexes.pb(id[i]-1);
            if(cnt < k) {
                cnt++;
            } else {
                int index = 0, currentLow = 10e9;
                REP(i, sz(onlineIndexes)) {
                    if(t[onlineIndexes[i]] < currentLow) {
//                            cout << "\t" << i << " " << online[i] << " && " << t[i] << " < " << currentLow << endl;
                            currentLow = t[onlineIndexes[i]];
                            index = i;
                    }
                }
//                cout << "\t" << index << endl;
                online[onlineIndexes[index]] = false;
                onlineIndexes.erase(onlineIndexes.begin() + index);
            }
//            cout << id[i] << " " << online[id[i] - 1] << endl;
        } else {
            if(online[id[i]-1] == 1) cout << "YES" << endl;
            else {
                cout << "NO" << endl;
            }
        }
    }




    return 0;
}
