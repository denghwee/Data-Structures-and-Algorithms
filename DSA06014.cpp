#include <bits/stdc++.h>
using namespace std;
#define faster(); ios_base::sync_with_stdio(false);cin.tie();cout.tie();
#define matrix vector <vector<long long>>
#define MOD 1000000007
#define el "\n"
const long long big = 1e6;

bool isPrime(int n) {
	if ( n < 2 )
	{
		return 0;
	}
	for (int i = 2 ; i <= sqrt(n) ; i++)
	{
		if ( n % i == 0 )
		{
			return 0;
		}
	}
	return 1;
}

int main() {
	faster();
	int t;
	cin >> t;
	while ( t-- )
	{
		int n, check = 0;
		cin >> n;
		for (int i = 2 ; i <= n / 2 ; i++)
		{
			if ( isPrime(i) == 1 && isPrime(n - i) == 1 )
			{
				check = 1;
				cout << i << " " << n - i;
				break;
			}
		}
		if ( check == 0 )
		{
			cout << -1;
		}
		if ( t != 0 )
		{
			cout << endl;
		}
	}
}
