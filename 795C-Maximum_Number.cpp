#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  cin >> N;

  string ans;

  while(N>3) {
    N-=2;
    ans+="1";
  }

  if(N==3) ans="7"+ans;
  else ans+="1";

  cout << ans << endl;
}