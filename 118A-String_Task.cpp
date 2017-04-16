#include <iostream>
#include <string>

using namespace std;

int main()
{
    string in, out = "";
    cin >> in;

    for(int i = 0; i < in.length(); i++) {
        if(in[i] != 'A' && in[i] != 'a' && in[i] != 'E' && in[i] != 'e' && in[i] != 'I' && in[i] != 'i' && in[i] != 'O' && in[i] != 'o' && in[i] != 'U' && in[i] != 'u' && in[i] != 'Y' && in[i] != 'y') {
            out += '.';
            if(in[i] < 95) {
                in[i] += 32;
            }
            out += in[i];
        }
    }

    cout << out << endl;
    return 0;
}
