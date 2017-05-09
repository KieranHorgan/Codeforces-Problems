#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n';

const ll upper = 5'000'005;

ll n, a, b, ans;
bitset<upper> isPrime;
vector<ll> primes;
ll dp[upper], S[upper], PD[upper];

void sieve() {
	isPrime.set();
	isPrime[0] = isPrime[1] = 0;
	for(ll i = 2; i <= sqrt(upper); i++)
		if(isPrime[i]) {
			for(int j = i*i; j <= upper; j+=i) {
				isPrime[j] = 0;
				if(!PD[j]) PD[j] = i;
			}
		}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	sieve();
	cin >> n;

	for(ll i = 2; i <= upper; i++) {
		if(isPrime[i]) dp[i]=1;
		else dp[i] = dp[i/PD[i]]+1;
	}


	for(ll i = 1; i <= upper-5; i++) {
		S[i] = S[i-1] + dp[i];
	}

	while(n--) {
		cin >> a >> b;

		cout << S[a]-S[b] << endl;
	}
}