#include <bits/stdc++.h>

using namespace std;

#define MAX 100

//vector<int> AdjacenyList[MAX];
//int AdjacenyMatrix[MAX][MAX];

int main() {
    int n;
    cin >> n;

    string lr;
    int x[n];

    cin >> lr;
    for(int i = 0; i < n; i++)
        cin >> x[i];


    int coor = -1;

    for(int i = 0; i < n-1; i++) {
//        cout << lr[i] << " " << lr[i+1] << endl;
        if(lr[i] == 'R' && lr[i+1] == 'L') {
//            cout << "1" << endl;
            if(coor == -1) coor = i;
            else {
                if(x[coor+1] - x[coor] > x[i+1] - x[i]) coor = i;
            }
//    cout << coor << endl;
        }
    }

    if(coor == -1) cout << -1;
    else cout << (x[coor+1] - x[coor])/2;
    return 0;
}
