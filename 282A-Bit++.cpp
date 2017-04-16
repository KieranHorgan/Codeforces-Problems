#include <iostream>

using namespace std;

int main()
{
    int x = 0;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        string a;
        cin >> a;
        if(a[1] == '+') {
            x++;
        } else {
            x--;
        }
    }
    cout << x;
    return 0;
}
