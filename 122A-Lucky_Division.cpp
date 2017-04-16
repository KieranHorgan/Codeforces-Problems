#include <iostream>

using namespace std;

int main()
{
    int n;
    int luckyNums[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
    bool test = false;

    cin >> n;

    for(int i = 0; i < 14; i++) {
        if(n == luckyNums[i] || n % luckyNums[i] == 0) {
            test = true;
            break;
        }
    }

    if(test)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
