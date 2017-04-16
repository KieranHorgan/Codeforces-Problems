#include <bits/stdc++.h>

using namespace std;

int q;
map<long long, long long> m;

long long v, u, w;

int op1(long long x, long long y) {
    if(x == y) {
        //cout << y << " ";
        //m[x] += w;

        //cout << x << ": " << m[x] << endl;
        return 0;
    } else if(x > y) {
        //cout << x << " ";
        m[x] += w;
        //cout << x << ": " << m[x] << endl;
        if(x & 1) op1((x-1)/2, y);
        else op1((x)/2, y);
    } else {
        //cout << y << " ";
        m[y] += w;
        //cout << y << ": " << m[y] << endl;
        if(y & 1) op1(x, (y-1)/2);
        else op1(x, (y)/2);
    }
}

int op2(long long x, long long y, long long ans) {
    if(x == y) {
        //ans += m[x];
        cout << ans << endl;

        return 0;
    } else if(x > y) {
        //cout << x << " ";
        ans += m[x];
        if(x & 1) op2((x-1)/2, y, ans);
        else op2((x)/2, y, ans);
    } else {
        //cout << y << " ";
        ans += m[y];
        if(y & 1) op2(x, (y-1)/2, ans);
        else op2(x, (y)/2, ans);
    }
}

int main() {
    cin >> q;

    while(q--) {
        int a;
        cin >> a;

        if(a == 1) {
            cin >> v >> u >> w;
            op1(v, u);
            //cout << endl;
        } else {
            cin >> v >> u;
            op2(v, u, 0);
            //cout << endl;
        }
    }


    /*
    for(int i = 1; i <= q/2; i++) {
        AdjacencyList[i].push_back(i*2);
        AdjacencyList[i].push_back((i*2) + 1);

        AdjacencyList[i*2].push_back(i);
        AdjacencyList[(i*2) + 1].push_back(i);
    }

    for(int i = 1; i <= q; i++) {
        cout << endl << i << " ";
        for(int j = 0; j < AdjacencyList[i].size(); j++) {
            cout << AdjacencyList[i][j] << " ";
        }
    }*/

    return 0;
}
