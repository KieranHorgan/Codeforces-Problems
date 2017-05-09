#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll TrainMatrix[405][405];
ll BusMatrix[405][405];

ll n, m;
int main() {
	cin >> n >> m;
	for(int i = 0; i < 403; i++)
		for(int j = 0; j < 403; j++) {
			TrainMatrix[i][j]=1<<30;
			BusMatrix[i][j]=1<<30;
		}

	for(int i = 0; i < m; i++) {
		ll u, v;
		cin >> u >> v;
		TrainMatrix[u][v]=1;
		TrainMatrix[v][u]=1;
	}
	for(int i = 0; i < 403; i++)
		for(int j = 0; j < 403; j++)
			if(TrainMatrix[i][j]==1<<30) BusMatrix[i][j] = 1;

	for(int k = 1; k <= n; k++)
		for(int i = 1; i <= n; i++)
			for(int j = 1; j <= n; j++)
				TrainMatrix[i][j] = min(TrainMatrix[i][j], TrainMatrix[i][k]+TrainMatrix[k][j]);
	for(int k = 1; k <= n; k++)
		for(int i = 1; i <= n; i++)
			for(int j = 1; j <= n; j++)
				BusMatrix[i][j] = min(BusMatrix[i][j], BusMatrix[i][k]+BusMatrix[k][j]);

	if(TrainMatrix[1][n] >= 1<<30 -1 || BusMatrix[1][n] >= 1<<30)
		cout << -1 << endl;
	else {
		cout << max(BusMatrix[1][n], TrainMatrix[1][n]) << endl;
	}
}