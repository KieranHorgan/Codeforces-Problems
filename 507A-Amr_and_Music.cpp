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


ll n, k, ans = 0;

int main()
{
	ios_base::sync_with_stdio(0);

    cin >> n >> k;
    vi instruments;
    vi indexes;
    REP(i, n) {
        int t;
        cin >> t;
        instruments.push_back(t);
    }
    bool used[n];
    REP(i, n) used[i] = false;
    
    int total = 0;
    while(true) {
        int current = inf;
        int index = 0;
        auto it = instruments.begin();
        int j = 0;
        for(auto i = instruments.begin(); i != instruments.end(); i++, j++) {
//            cout << "\t" << *i << endl;
            if(!used[j] && *i < current) {
                index = j;
                it = i;
                current = *i;
            }
        }
//        cout << current;
//        cout << *index << endl;
        if(total + current <= k) {
            ans++;
            indexes.push_back(index);
            total += current;
            used[index] = true;
        } else {
            break;
        }
        if(instruments.empty()) break;
    }
    
    cout << ans << endl;
    sort(indexes.begin(), indexes.end());
    REP(i, ans) cout << indexes[i]+1 << " ";
    
	return 0;
}

