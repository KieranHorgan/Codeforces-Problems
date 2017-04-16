#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int gridA[2][2];
    int gridB[2][2];
    int APos[2];
    int BPos[2];
    char temp;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cin >> temp;
            if(temp == 'X') gridA[i][j] = -1;
            else gridA[i][j] = (int) temp - 64;
            if(temp == 'A') {
                APos[0] = i;
                APos[1] = j;
            }
        }
    }
    vector<int> AOrder;
    do {
        if(gridA[APos[0]][APos[1]] != -1) {
            AOrder.push_back(gridA[APos[0]][APos[1]]);
        }
        if(APos[0] == 0 && APos[1] == 0) APos[1]++;
        else if(APos[0] == 0 && APos[1] == 1) APos[0]++;
        else if(APos[0] == 1 && APos[1] == 1) APos[1]--;
        else if(APos[0] == 1 && APos[1] == 0) APos[0]--;
    } while(gridA[APos[0]][APos[1]] != 1);

    int currentXY[2];
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cin >> temp;
            if(temp == 'X') gridB[i][j] = -1;
            else gridB[i][j] = (int) temp - 64;
            if(temp == 'A') {
                BPos[0] = i;
                BPos[1] = j;
            }
        }
    }
    vector<int> BOrder;
    do {
        if(gridB[BPos[0]][BPos[1]] != -1) {
            BOrder.push_back(gridB[BPos[0]][BPos[1]]);
        }
        if(BPos[0] == 0 && BPos[1] == 0) BPos[1]++;
        else if(BPos[0] == 0 && BPos[1] == 1) BPos[0]++;
        else if(BPos[0] == 1 && BPos[1] == 1) BPos[1]--;
        else if(BPos[0] == 1 && BPos[1] == 0) BPos[0]--;
    } while(gridB[BPos[0]][BPos[1]] != 1);

    bool theSame = true;
    for(int i = 0; i < 3; i++) if(AOrder[i] != BOrder[i]) theSame = false;

    if(theSame) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
