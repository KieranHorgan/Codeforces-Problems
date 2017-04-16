#include <sstream>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;

    string inp;
    string out[n];

    for(int i = 0; i < n; i++) {
        cin >> inp;
        out[i] = "";

        if(inp.length() > 10) {

            ostringstream ss;
            ss << inp.length() - 2;

            out[i] += inp[0];
            out[i] += ss.str();
            out[i] += inp[inp.length()-1];
        } else {
            out[i] += inp;
        }
    }

    for(int i = 0; i < n; i++) {
        cout << out[i] << endl;
    }
    return 0;
}
