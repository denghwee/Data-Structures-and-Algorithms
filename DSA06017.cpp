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
		int m, n;
		cin >> m >> n;
		vector <long long> a, b, c, d;
		a.assign(m,0);
		b.assign(n,0);
		c.assign(100005,0);
		d.assign(100005,0);
		for (int i = 0 ; i < m ; i++)
		{
			cin >> a[i];
			c[a[i]]++;
		}
		for (int i = 0 ; i < n ; i++)
		{
			cin >> b[i];
			d[b[i]]++;
		}
		for (int i = 0 ; i <= 100000 ; i++)
		{
			if ( c[i] != 0 || d[i] != 0 )
			{
				cout << i << " ";
			}
		}
		if ( t != 0 )
		{
			cout << endl;
		}
	}
}
