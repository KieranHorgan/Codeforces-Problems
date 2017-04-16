#include <iostream>

using namespace std;

void check() {
    int n;
    cin >> n;

    int k;
    cin >> k;

    string inp;
    cin >> inp;
    string inpA = "";
    string inpB = "";

    int noOfMoves = 0;
    int noOfMovesA = 0;
    int noOfMovesB = 0;

    if(k > 2)
    {
        for(int i = 1; i < n; i++)
        {
            if(inp[i] == inp[i-1])
            {
                noOfMoves++;
                if(inp[i+1] != 'A' && inp[i-1] != 'A')
                {
                    inp[i] = 'A';
                } else if(inp[i+1] != 'B' && inp[i-1] != 'B')
                {
                    inp[i] = 'B';
                } else
                {
                    inp[i] = 'C';
                }
            }
        }
        cout << noOfMoves << endl << inp << endl;
    } else
    {
        for(int i = 0; i < n; i++)
        {
            if(i%2 == 0) {
                inpA += 'A';
                inpB += 'B';

                if(inp[i] == 'A') {
                    noOfMovesB++;
                } else {
                    noOfMovesA++;
                }
            } else {
                inpA += 'B';
                inpB += 'A';

                if(inp[i] == 'A') {
                    noOfMovesA++;
                } else {
                    noOfMovesB++;
                }
            }
        }
        if (noOfMovesB < noOfMovesA) cout << noOfMovesB << endl << inpB << endl;
        else cout << noOfMovesA << endl << inpA << endl;
    }
    return;
}

int main()
{
    check();
}
