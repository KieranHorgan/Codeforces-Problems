#include <bits/stdc++.h>

using namespace std;

int n, ans;
int a[200005];
vector<int> b[200005];

int energy[200005];

int main() {
    cin >> n;

    for(int i= 0; i < n; i++) {
        cin >> a[i];
        a[i]--;
        b[a[i]].push_back(i);
    }

    energy[a[0]] = 1;

    energy[0] = 0;

    for(int i = 1; i < n; i++) {
        if(energy[i] == 0) {
            energy[i] = energy[i-1] + 1;
        } else {
            energy[i] = min(energy[i-1] + 1, energy[i]);
        }

        if(energy[a[i]] == 0) {
            energy[a[i]] = energy[i] + 1;
        } else {
            energy[a[i]] = min(energy[i] + 1, energy[a[i]]);
        }

    }

    for(int x = 0; x < 500; x++) {

        for(int i = 1; i < n; i++) {
            if(energy[i] == 0) {
                energy[i] = energy[i-1] + 1;
            } else {
                energy[i] = min(energy[i-1] + 1, energy[i]);
            }

            if(energy[a[i]] == 0) {
                energy[a[i]] = energy[i] + 1;
            } else {
                energy[a[i]] = min(energy[i] + 1, energy[a[i]]);
            }

        }

        for(int i = n-2; i > 0; i--) {
            energy[i] = min(energy[i], energy[i+1] + 1);
        }
    }

    for(int i = 0; i < n; i++) {
        cout << energy[i] << " ";
    }

    return 0;
}
