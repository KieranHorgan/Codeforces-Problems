#include <iostream>

using namespace std;

int main()
{
    int total = 0;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        if(a+b+c > 1) {
            total++;
        }
    }
    cout << total;
    return 0;
}
