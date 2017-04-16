// Example program
#include <iostream>

using namespace std;

int main()
{
    int a, b, count = 0;
    cin >> a >> b;
    if(a == 1 && b == 1) {
        cout << 0 << endl;
    } else {
        while(a > 0 && b > 0) {
            if(a < b) {
                a++;
                b-=2;
            } else {
                b++;
                a-=2;
            }
            count++;
        }
        cout << count << endl;
    }
    
}
