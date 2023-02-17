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
		vector <long long> a;
		a.assign(m+n,0);
		for (int i = 0 ; i < m + n ; i++)
		{
			cin >> a[i];
		}
		sort(a.begin(),a.end());
		for (int i = 0 ; i < m + n ; i++)
		{
			cout << a[i] << " ";
		}
		if ( t != 0 )
		{
			cout << endl;
		}
	}
}
