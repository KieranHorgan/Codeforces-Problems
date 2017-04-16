#include <bits/stdc++.h>

using namespace std;



int main() {
    int t, s, x;
    cin >> t >> s >> x;

    if(x == t) {
        cout << "YES\n";
        return 0;
    }

    t = t+s+1;

    for(; t <= x+s; t += s) {
 //           cout << t << " " << x << endl;
        if(t == x || t-1 == x) {
            cout << "YES\n";
            return 0;
        }
    }

    cout << "NO";

    return 0;
}
