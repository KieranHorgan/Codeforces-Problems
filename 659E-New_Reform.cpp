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
bool cycle;
bool visited[100005];
vi AdjList[100005];

void dfs(int u, int parent) {
    visited[u] = true;
    REP(j, AdjList[u].size()) {
        int v = AdjList[u][j];
        if(!visited[v] && v!=parent) {
            dfs(v, u);
        } else if(visited[v] && v!=parent){
            cycle=true;
        }
    }
}

int main()
{
    cin >> n >> m;
    REP(i, m) {
        int a, b;
        cin >> a >> b;
        a--; b--;
        AdjList[a].pb(b);
        AdjList[b].pb(a);
    }

    REP(i, n) {
        if(!visited[i]) {
            cycle = false;
            dfs(i, -1);
            if(!cycle) ans++;
        }
    }

    cout << ans;

    return 0;
}
