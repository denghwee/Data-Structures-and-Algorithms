#include <bits/stdc++.h>
using namespace std;
#define faster(); ios_base::sync_with_stdio(false);cin.tie();cout.tie();
#define matrix vector <vector<long long>>
#define MOD 1000000007
#define el "\n"
#define fi first
#define se second
const long long big = 1e6;

int main() {
	faster();
	int t;
	cin >> t;
	while ( t-- )
	{
		int n, res = big;
		cin >> n;
		int a[n];
		for (int i = 0 ; i < n ; i++)
		{
			cin >> a[i];
		}
		for (int i = 0 ; i < n - 1 ; i++)
		{
			for (int j = i + 1 ; j < n ; j++)
			{
				if ( abs(a[i] + a[j]) < abs(res) )
				{
					res = a[i] + a[j];
				}
			}
		}
		cout << res;
		if ( t != 0 )
		{
			cout << endl;
		}
	}
}
