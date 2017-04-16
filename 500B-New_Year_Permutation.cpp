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


ll n, ans = 0;

/*
 * Disjoint Set Union data structure
 * Implementation based on the book:
 * Robert Sedgewick. Algorithms in C++, parts 1-4. Third Edition. 1998.
 */
class DSU {

public:
    int *group;
    int *parent;
    int elems;


    DSU(int n) {
        elems = n;
        parent = new int[elems];
        group = new int[elems];

        for (int i = 0; i < elems; ++i) {
            parent[i] = i;
            group[i] = 1;
        }
    }

    ~DSU() {
        delete [] parent;
        delete [] group;
    }

    int find(int a) {
        int p = parent[a];
        while (p != parent[p]) {
            // Uses path compression by halving
            parent[p] = parent[parent[p]];
            p = parent[p];
        }
        return p;
    }

    void merge(int a, int b) {
        int ga = find(a);
        int gb = find(b);
        if (group[gb] > group[ga])
            swap(ga, gb);
        parent[gb] = find(ga);
        group[ga] += group[gb];
    }

    int size(int a) {
        return group[find(a)];
    }
};

int main()
{
	ios_base::sync_with_stdio(0);

    cin >> n;
	DSU unionFind(n);

	int p[n];
	REP(i, n)
	    cin >> p[i];
    
	vi AdjList[n];
	REP(i, n) {
        string t;
        cin >> t;
		FOR(j, i, n - 1)
			if(t[j] == '1')
				unionFind.merge(i, j);
	}

    REP(i, n) 
        FOR(j, i+1, n-1) 
            if(p[i] > p[j]) 
                if(unionFind.find(i) == unionFind.find(j)) 
                    swap(p[i], p[j]);

    REP(i, n)
        cout << p[i] << " ";

/*	REP(i, n) {
		cout << i << ":";
		REP(j, sz(AdjList[i])) cout << AdjList[i][j] << " ";
		cout << endl;
	}*/



//	cout << ans;
	return 0;
}