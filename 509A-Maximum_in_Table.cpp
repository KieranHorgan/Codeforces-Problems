#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;

    int big = 1;
    int table[a][a];
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < a; j++)
        {
            if(i == 0)
            {
                table[i][j] = 1;
            } else
            {
                table[i][j] = 0;
                for(int k = 0; k <= j; k++)
                {
                    table[i][j] += table[i-1][k];
                }
                if(table[i][j] > big) big = table[i][j];
            }
        }
    }

    cout << big;
    return 0;
}
