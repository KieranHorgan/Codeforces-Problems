#include <bits/stdc++.h>

#define ll long long

using namespace std;

ll n, ans;
string s;

char grid[4][4];
char gridCopy[4][4];

bool checkIfWon() {
	bool isWon = false;

	if(gridCopy[0][0] == 'x' && gridCopy[0][1] == 'x' && gridCopy[0][2] == 'x') isWon = true;
	if(gridCopy[1][0] == 'x' && gridCopy[1][1] == 'x' && gridCopy[1][2] == 'x') isWon = true;
	if(gridCopy[2][0] == 'x' && gridCopy[2][1] == 'x' && gridCopy[2][2] == 'x') isWon = true;
	if(gridCopy[3][0] == 'x' && gridCopy[3][1] == 'x' && gridCopy[3][2] == 'x') isWon = true;
	if(gridCopy[0][3] == 'x' && gridCopy[0][1] == 'x' && gridCopy[0][2] == 'x') isWon = true;
	if(gridCopy[1][3] == 'x' && gridCopy[1][1] == 'x' && gridCopy[1][2] == 'x') isWon = true;
	if(gridCopy[2][3] == 'x' && gridCopy[2][1] == 'x' && gridCopy[2][2] == 'x') isWon = true;
	if(gridCopy[3][3] == 'x' && gridCopy[3][1] == 'x' && gridCopy[3][2] == 'x') isWon = true;

	if(gridCopy[0][0] == 'x' && gridCopy[1][0] == 'x' && gridCopy[2][0] == 'x') isWon = true;
	if(gridCopy[0][1] == 'x' && gridCopy[1][1] == 'x' && gridCopy[2][1] == 'x') isWon = true;
	if(gridCopy[0][2] == 'x' && gridCopy[1][2] == 'x' && gridCopy[2][2] == 'x') isWon = true;
	if(gridCopy[0][3] == 'x' && gridCopy[1][3] == 'x' && gridCopy[2][3] == 'x') isWon = true;
	if(gridCopy[3][0] == 'x' && gridCopy[1][0] == 'x' && gridCopy[2][0] == 'x') isWon = true;
	if(gridCopy[3][1] == 'x' && gridCopy[1][1] == 'x' && gridCopy[2][1] == 'x') isWon = true;
	if(gridCopy[3][2] == 'x' && gridCopy[1][2] == 'x' && gridCopy[2][2] == 'x') isWon = true;
	if(gridCopy[3][3] == 'x' && gridCopy[1][3] == 'x' && gridCopy[2][3] == 'x') isWon = true;

	if(gridCopy[0][0] == 'x' && gridCopy[1][1] == 'x' && gridCopy[2][2] == 'x') isWon = true;
	if(gridCopy[1][0] == 'x' && gridCopy[2][1] == 'x' && gridCopy[3][2] == 'x') isWon = true;
	if(gridCopy[0][1] == 'x' && gridCopy[1][2] == 'x' && gridCopy[2][3] == 'x') isWon = true;
	if(gridCopy[1][1] == 'x' && gridCopy[2][2] == 'x' && gridCopy[3][3] == 'x') isWon = true;

	if(gridCopy[0][2] == 'x' && gridCopy[1][1] == 'x' && gridCopy[2][0] == 'x') isWon = true;
	if(gridCopy[1][2] == 'x' && gridCopy[2][1] == 'x' && gridCopy[3][0] == 'x') isWon = true;
	if(gridCopy[0][3] == 'x' && gridCopy[1][2] == 'x' && gridCopy[2][1] == 'x') isWon = true;
	if(gridCopy[1][3] == 'x' && gridCopy[2][2] == 'x' && gridCopy[3][1] == 'x') isWon = true;

	return isWon;
}

int main() {
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 4; j++) {
			char c;
			cin >> c;
			grid[i][j]=c;
		}
	}


	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 4; j++) {
			if(grid[i][j] != '.') continue;

			for(int l = 0; l < 4; l++) {
				for(int m = 0; m < 4; m++) {
					gridCopy[l][m] = grid[l][m];
				}
			}

			gridCopy[i][j] = 'x';

			if(checkIfWon()) {
				cout << "YES" << endl;
				return 0;
			}
		}
	}

	cout << "NO" << endl;


}