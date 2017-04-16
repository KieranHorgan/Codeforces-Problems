#include <iostream>

#define forn(i, n) for (int i = 0; i < (int)(n); ++i)

using namespace std;

int main()
{
    int n;
    cin >> n;

    string a[n];
    forn(i, n) {
        cin >> a[i];
    }

    string dxy[2*n - 1];
    forn(i, n*2-1) {
        dxy[i] = "";
        forn(j, 2*n - 1) {
            dxy[i] += 'x';
        }
    }

    forn(y, n)
        forn(x, n)
            if (a[y][x] == 'o')
                for(int dy = -y; dy < n-y; dy++)
                    for(int dx = -x; dx < n-x; dx++) {
                        if (dx == 0 && dy == 0) continue;
                        if (a[y + dy][x + dx] == '.')
                            dxy[dy + n - 1][dx + n - 1] = '.';

                    }

    forn(y, n)
        forn(x, n)
            if (a[y][x] == 'o')
                for(int dy = -y; dy < n-y; dy++)
                    for(int dx = -x; dx < n-x; dx++)
                        if (a[y + dy][x + dx] == 'x' && dxy[dy + n - 1][dx + n - 1] == 'x')
                            a[y + dy][x + dx] = '.';

    bool broke = false;
    forn(y, n) {
        forn(x, n)
            if(a[y][x] == 'x') {
                cout << "NO\n";
                broke = true;
                break;
            }

        if(broke) break;
    }

    if(!broke) {
        dxy[n - 1][n - 1] = 'o';
        cout << "YES\n";
        forn(y, n*2-1) {
            forn(x, n*2-1) {
                cout << dxy[y][x];
            }
            cout << endl;
        }
    }
}
