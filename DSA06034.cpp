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
		long long n, k, x, res = 0;
		cin >> n >> k;
		map <long long,long long> m;
		for (int i = 0 ; i < n ; i++)
		{
			cin >> x;
			m[x]++;
		}
		for (auto i : m)
		{
			if ( i.first * 2 == k )
			{
				res += i.second * (i.second - 1);
			}
			else
			{
				res += i.second * m[k - i.first];
			}
		}
		cout << res / 2;
		if ( t != 0 )
		{
			cout << endl;
		}
	}
}
