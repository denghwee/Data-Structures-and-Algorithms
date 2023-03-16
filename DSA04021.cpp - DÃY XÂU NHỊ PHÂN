#include <bits/stdc++.h>
using namespace std;
#define faster(); ios_base::sync_with_stdio(false);cin.tie();cout.tie();
#define matrix vector <vector<long long>>
#define MOD 1000000007
#define el "\n"
#define fi first
#define se second
const long long big = 1e6;

long long F[93];

void Sieve() {
	F[1] = 1;
	F[2] = 1;
	for (int i = 2 ; i < 93 ; i++)
	{
		F[i] = F[i-1] + F[i-2];
	}
}

void Fibo(int n, long long k) {
	if ( n == 1 )
	{
		cout << 0;
		return;
	}
	else if ( n == 2 )
	{
		cout << 1;
		return;
	}
	if ( k > F[n-2] ) Fibo(n-1,k-F[n-2]);
	else Fibo(n-2,k);
}

int main() {
    faster();
    Sieve();
    int t;
    cin >> t;
    while ( t-- )
    {
    	long long n, k;
    	cin >> n >> k;
		Fibo(n,k);
    	if ( t != 0 )
    	{
    		cout << el;
		}
	}
}
