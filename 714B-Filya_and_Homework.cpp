#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll n, m, ans;
string s;

map<int, bool> used;
vector<int> x;

int main() {
    cin >> n;

    for(int i = 0; i < n; i++) {
        int z;
        cin >> z;
        if(!used[z]) {
            used[z] = true;
            x.push_back(z);
        }
    }

    sort(x.begin(), x.end());


    if(x.size() < 3) {
        cout << "YES" << endl;
        return 0;
    } else if(x.size() == 3) {
        if((x[2] - x[1]) == (x[1] - x[0])) {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;

    return 0;
}
