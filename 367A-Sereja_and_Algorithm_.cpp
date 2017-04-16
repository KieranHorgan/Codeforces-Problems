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

#define inf                             10e9 // 1 billion, safer than 2B for Floyd Warshall’s
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

// Fenwick Tree
class BinaryIndexedTree {
  public:
    BinaryIndexedTree(int size) {
        size_ = size;
        data_ = vector<int>(size_, 0);
    }

    // v[at] += by
    void update(int at, int by) {
        while (at < size_) {
            data_[at] += by;
            at |= (at + 1);
        }
    }

    // v[0] + v[1] + ... + v[at]
    int query(int at) const {
        int r = 0;
        while (at >= 0) {
            r += data_[at];
            at = (at & (at + 1)) - 1;
        }
        return r;
    }

    // range query [left, right]
    int query(int left, int right) {
        int l = 0;
        if (left > 0)
            l = query(left-1);
        return query(right) - l;
    }

  private:
    int size_;
    vector<int> data_;
};

int main()
{
    string s;
    cin >> s;
    BinaryIndexedTree noOfX = BinaryIndexedTree(s.length());
    BinaryIndexedTree noOfY = BinaryIndexedTree(s.length());
    BinaryIndexedTree noOfZ = BinaryIndexedTree(s.length());

    REP(i, s.length()) {
        if(s[i] == 'x') noOfX.update(i, 1);
        else if(s[i] == 'y') noOfY.update(i, 1);
        else noOfZ.update(i, 1);
    }

    int q;
    cin >> q;
    REP(i, q) {
        int l, r;
        cin >> l >> r;
        l--; r--;

        if(r-l<2) {
            cout << "YES\n";
            continue;
        }

        int MIN = min(noOfX.query(l, r), noOfY.query(l, r));
        MIN = min(MIN, noOfZ.query(l, r));

        int MAX = max(noOfX.query(l, r), noOfY.query(l, r));
        MAX = max(MAX, noOfZ.query(l, r));

        if(MAX-1>MIN) cout << "NO\n";
        else cout << "YES\n";
    }

    return 0;
}
