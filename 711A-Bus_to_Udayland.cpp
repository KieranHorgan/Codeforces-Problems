#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    bool has = false;
    vector<string> bus;
    for(int i = 0; i < n; i++) {
        char a, b, k, x, y;
        bus.push_back("");
        cin >> a >> b >> k >> x >> y;

        if(!has) {
            if(a == 'O' && b == 'O') {
                a = '+';
                b = '+';
                has = true;
            }
        }
        if(!has) {
            if(x == 'O' && y == 'O') {
                x = '+';
                y = '+';
                has = true;
            }
        }
        bus[i]+=a;
        bus[i]+=b;
        bus[i]+=k;
        bus[i]+=x;
        bus[i]+=y;
    }

    if(has) {
        cout << "YES" << endl;
        for(int i = 0; i<n; i++) cout << bus[i] << endl;
    } else cout << "NO" << endl;
    return 0;
}
