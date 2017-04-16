#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cctype>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <algorithm>
#include <functional>

using namespace std;

// Shortcuts for "common" data types in contests
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<pair<int, int> > vpii;

// Loops
#define REP(i,n)                        for(int i=0;i<(n);i++)
#define FOR(i,a,b)                      for(int i=(a);i<=(b);i++)
#define FORD(i,a,b)                     for(int i=(a);i>=(b);i--)
#define DEBUG(x)                        cout << '>' << #x << ':' << x << endl;

#define inf                             (ll)1e9 // 1 billion, safer than 2B for Floyd Warshall’s
#define mod                             1000000007
#define pb                              push_back

// Some common useful functions
#define maX(a,b)                        ( (a) > (b) ? (a) : (b))
#define miN(a,b)                        ( (a) < (b) ? (a) : (b))
#define sqr(x)                          ((x)*(x))
#define rnd(d)                          (int)((double)d + 0.5)
#define sz(x)                           ((int)(x).size())
#define rite(x)                         freopen(x,"w",stdout);
#define read(x)                         freopen(x,"r",stdin);
#define DEBUG(x)                        cout << '>' << #x << ':' << x << endl;
#define vecIsPresent(vec, x)            (find(vec.begin(), vec.end(), x) != vec.end())

// Input macros
#define s(n)                            scanf("%d",&n)
#define sc(n)                           scanf("%c",&n)
#define sl(n)                           scanf("%l64d",&n)
#define sf(n)                           scanf("%lf",&n)
#define ss(n)                           scanf("%s",n)


ll n, m, cnt = 0;

vi connected[500005];
int visited[500005]; // global variable, initially all values are set to UNVISITED
vi notAdjList[500005];

int get(int x) {
    return visited[x] ? visited[x] = get(visited[x]) : x;
}

void dfs(int u) { // DFS for normal usage: as graph traversal algorithm
    visited[u] = u+1;// important: we mark this vertex as visited
    connected[cnt].push_back(u);

    for(int i = 0, j = get(1); j <= n; j = get(j+1)) { // default DS: AdjList
        for(;i<notAdjList[u].size()&&notAdjList[u][i]<j;i++) {}
        if(i < notAdjList[u].size() && notAdjList[u][i] == j) continue;
        dfs(j);
    }
}

int main() {
    ios_base::sync_with_stdio(0);

    s(n);s(m);
//    n = 5002;m = 10000;

    REP(i, m) {
        int a, b;
        s(a);s(b);
//        a = i/2 + 1;b = 5001 + (i%2);
        notAdjList[a].push_back(b);
        notAdjList[b].push_back(a);
    }
    
    FOR(i, 1, n) sort(notAdjList[i].begin(), notAdjList[i].end());

    FOR(i, 1, n) {
        if(!visited[i]) {
            dfs(i);
            cnt++;
        }
    }

    cout << cnt;

    cout << endl;
    REP(i, cnt) {
        cout << sz(connected[i]) << " ";
        REP(j, sz(connected[i])) {
            cout << connected[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
