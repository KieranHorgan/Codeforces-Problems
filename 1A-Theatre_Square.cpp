#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double n, m, a, stones;
    cin >> n >> m >> a;

    stones = ceil(n/a) * ceil(m/a);

    cout << (long long)stones << endl;
    return 0;
}
