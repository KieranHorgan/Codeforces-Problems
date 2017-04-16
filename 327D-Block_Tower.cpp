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
#include <utility>
#include <functional>

using namespace std;

// Shortcuts for "common" data types in contests
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<pii> vpii;
typedef vector<int> vi;

// Loops
#define REP(i,n)                        for(int i=0;i<(n);i++)
#define REPG(i,n)                       for(i=0;i<(n);i++)
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
#define vecIsPresent(vec, x)            find(vec.begin(), vec.end(), x) != vec.end();

// Input macros
#define s(n)                            scanf("%d",&n)
#define sc(n)                           scanf("%c",&n)
#define sl(n)                           scanf("%l64d",&n)
#define sf(n)                           scanf("%lf",&n)
#define ss(n)                           scanf("%s",n)


int n, m, cnt = 0;
bool visited[501][501];

// We need stringstream because we need to ru through everything to count it before printing
stringstream ans;

int dfs(int y, int x, bool isRoot) {
    if(visited[y][x]) return 0;
    visited[y][x] = true;

    cnt++;

    ans << "B " << y+1 << " " << x+1 << endl;

    if (y > 0) dfs(y-1, x, false);
    if (y < n-1) dfs(y+1, x, false);
    if (x > 0) dfs(y, x-1, false);
    if (x < m-1) dfs(y, x+1, false);

    if(!isRoot) {
          cnt += 2;
          ans << "D " << y+1 << " " << x+1 << endl;
          ans << "R " << y+1 << " " << x+1 << endl;
    }

    return 0;
}

int main()
{
    ios_base::sync_with_stdio(0);

    cin >> n  >> m;
    REP(i, n) {
        string temp;
        cin >> temp;
        REP(j, m)
            if(temp[j] == '.') visited[i][j] = false;
            else visited[i][j] = true; // To ignore the "holes" just treat them as already visited
    }

    REP(i, n) REP(j, m) if(!visited[i][j]) dfs(i, j, true);


    cout << cnt << endl << ans.str();
    return 0;
}
