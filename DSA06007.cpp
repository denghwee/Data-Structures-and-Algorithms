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
		int n;
		cin >> n;
		vector <long long> a(n);
		vector <long long> b(n);
		for (int i = 0 ; i < n ; i++)
		{
			cin >> a[i];
			b[i] = a[i];
		}
		sort(a.begin(),a.end());
		int res1, res2;
		for (int i = 0 ; i < n ; i++)
		{
			if ( a[i] != b[i] )
			{
				res1 = i + 1;
				break;
			}
		}
		for (int i = n - 1 ; i >= 0 ; i--)
		{
			if ( a[i] != b[i] )
			{
				res2 = i + 1;
				break;
			}
		}
		cout << res1 << " " << res2;
		if ( t != 0 )
		{
			cout << endl;
		}
	}
}
