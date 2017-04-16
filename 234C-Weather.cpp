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


ll n, ans = inf;

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	s(n);
	int a[n];

	REP(i, n) s(a[i]);

	int nonPositiveCnt[n];
	int nonNegativeCnt[n];
	if (a[0] >= 0) nonNegativeCnt[0] = 1;
	else nonNegativeCnt[0] = 0;
	FOR(i, 1, n-1) {
		if (a[i]>= 0) nonNegativeCnt[i] = nonNegativeCnt[i - 1] + 1;
		else nonNegativeCnt[i] = nonNegativeCnt[i - 1];
	}
	if (a[n-1] <= 0) nonPositiveCnt[n-1] = 1;
	else nonPositiveCnt[n-1] = 0;
	FORD(i, n-2, 0) {
		if (a[i] <= 0) nonPositiveCnt[i] = nonPositiveCnt[i + 1] + 1;
		else nonPositiveCnt[i] = nonPositiveCnt[i + 1];
	}

	REP(i, n) {
		ans = miN(ans, nonNegativeCnt[i] + nonPositiveCnt[i + 1]);
	}

	cout << ans;
	return 0;
}
