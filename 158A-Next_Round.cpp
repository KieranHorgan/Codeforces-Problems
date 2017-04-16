#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, k, total = 0;
    cin >> n >> k;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a, a + n);

    for (int i = 0; i < n; i++) {
        if(a[i] >= a[n - k] && a[i] > 0) {
            total++;
        }
    }

    cout << total << endl;
    return 0;
}
