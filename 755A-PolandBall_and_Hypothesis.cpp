#include <bits/stdc++.h>

#define ll long long

using namespace std;

ll n, k, ans;
vector<ll> a;
string s;


bool IsPrime(int number)
{	// Given:   num an integer > 1
	// Returns: true if num is prime
	// 			false otherwise.
	
	int i;
	
	for (i=2; i<number; i++)
	{
		if (number % i == 0)
		{
			return false;
		}
	}
	
	return true;	
}


int main() {
	cin >> n;

	for(int i = 1; i < 1001; i++) {
		if(!IsPrime((n*i)+1)) {
			cout << i << endl;
			return 0;
		}
	}


}