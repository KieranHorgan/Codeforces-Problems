/*#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int norSouLines[n][4], wesEasLines[m][4];
    int longest = 0;
    int currentLongest = 0;

    for(int i = 0; i < n; i++) {
        cin >> norSouLines[i][0] >> norSouLines[i][1] >> norSouLines[i][2];
        norSouLines[i][3] = norSouLines[i][1] + norSouLines[i][2];
        norSouLines[i][2] = norSouLines[i][0];
    }
    for(int i = 0; i < m; i++) {
        cin >> wesEasLines[i][0] >> wesEasLines[i][1] >> wesEasLines[i][2];
        wesEasLines[i][2] += wesEasLines[i][0];
        wesEasLines[i][3] = wesEasLines[i][1];

        for(int j = 0; j < n; j++) {
            if(norSouLines[j][0] > wesEasLines[i][0] && norSouLines[j][0] < wesEasLines[i][0] + wesEasLines[i][2] && wesEasLines[j][1] > norSouLines[j][1] && wesEasLines[j][1] < norSouLines[j][1] + norSouLines[j][2])
            {
                currentLongest = wesEasLines[i][1] - norSouLines[j][1];
                cout << wesEasLines[i][1] - norSouLines[j][1] << endl;
                if(currentLongest > norSouLines[j][3] - wesEasLines[i][1]) currentLongest = norSouLines[j][3] - wesEasLines[i][1];
                cout << norSouLines[j][3] - wesEasLines[i][1] << endl;
                if(currentLongest > norSouLines[j][0] - wesEasLines[i][0]) currentLongest = norSouLines[j][0] - wesEasLines[i][0];
                cout << norSouLines[j][0] - wesEasLines[i][0] << endl;
                if(currentLongest > wesEasLines[i][2] - norSouLines[j][0]) currentLongest = wesEasLines[i][2] - norSouLines[j][0];
                cout << wesEasLines[i][2] - norSouLines[j][0] << endl << endl;
            }
            if (currentLongest > longest) longest = currentLongest;
        }
    }

    cout << longest << endl;
}
*/

#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int upLine[n][3];
    int xUp, yUp, yUpAdd;
    int xAcross, yAcross, xAcrossAdd;

    int longest = 0;
    int currentShortest
     = 0;

    for(int i = 0; i < n; i++) {
        cin >> upLine[i][0] >> upLine[i][1] >> upLine[i][2];
    }


    for(int i = 0; i < m; i++) {
        cin >> xAcross >> yAcross >> xAcrossAdd;

        for(int j = 0; j < n; j++) {
            xUp = upLine[j][0];
            yUp = upLine[j][1];
            yUpAdd = upLine[j][2];

            if(yAcross > yUp && yAcross < yUp + yUpAdd && xUp > xAcross && xUp < xAcross + xAcrossAdd)
            {
                // Top difference
                currentShortest = (yUp + yUpAdd) - yAcross;
                //cout << currentShortest << endl;

                // Bottom difference
                if(currentShortest > yAcross - yUp) currentShortest = yAcross - yUp;
                //cout << currentShortest << endl;

                // Right Difference
                if(currentShortest > (xAcross + xAcrossAdd) - xUp) currentShortest = (xAcross + xAcrossAdd) - xUp;
                //cout << currentShortest << endl;

                // Left Difference
                if(currentShortest > xUp - xAcross) currentShortest = xUp - xAcross;
                //cout << currentShortest << endl << endl;
            }

            if(currentShortest > longest) longest = currentShortest;
        }
    }

    cout << longest << endl;
}
