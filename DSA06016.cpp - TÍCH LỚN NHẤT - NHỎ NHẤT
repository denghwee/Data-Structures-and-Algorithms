#include <bits/stdc++.h>
using namespace std;
#define faster(); ios_base::sync_with_stdio(false);cin.tie();cout.tie();
#define matrix vector <vector<long long>>
#define MOD 1000000007
#define el "\n"
const long long big = 1e6;

int main() {
	int t;
	cin >> t;
	while ( t-- )
	{
		int m, n;
		cin >> m >> n;
		vector <long long> a, b;
		a.assign(m,0);
		b.assign(n,0);
		for (int i = 0 ; i < m ; i++)
		{
			cin >> a[i];
		}
		for (int i = 0 ; i < n ; i++)
		{
			cin >> b[i];
		}
		sort(a.begin(),a.end());
		sort(b.begin(),b.end());
		cout << a[m-1] * b[0];
		if ( t != 0 )
		{
			cout << endl;
		}
	}
}
