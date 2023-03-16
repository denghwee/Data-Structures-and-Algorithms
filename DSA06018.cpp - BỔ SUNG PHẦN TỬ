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
		int n, res = 0;
		cin >> n;
		vector <long long> a(n);
		for (int i = 0 ; i < n ; i++)
		{
			cin >> a[i];
		}
		sort(a.begin(),a.end());
		int idx = a[0];
		for (int i = 0 ; i < n ; i++)
		{
			if ( a[i] != a[i+1] )
			{
				while ( a[i] != idx )
				{
					res++;
					idx++;
				}
				idx++;
			}
		}
		cout << res;
		if ( t != 0 )
		{
			cout << endl;
		}
	}
}
