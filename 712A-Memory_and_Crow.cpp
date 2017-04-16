#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll n, m, ans;
ll b[100005];
ll a[100005];

int main() {
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    b[n-1] = a[n-1];
    b[n-2] = a[n-2]+a[n-1];

    for(int i = n-3; i >= 0; i--) {
        b[i] = a[i] - a[i+2] + b[i+1];
    }
    for(int i = 0; i < n; i++) {
        cout << b[i] << " ";
    }

    return 0;
}
