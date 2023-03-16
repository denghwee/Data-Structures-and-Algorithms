#include <bits/stdc++.h>
using namespace std;
#define faster(); ios_base::sync_with_stdio(false);cin.tie();cout.tie();
#define matrix vector <vector<long long>>
#define MOD 1000000007
#define el "\n"
const long long big = 1e6;

int main() {
    faster();
    int t;
	cin >> t;
	while ( t-- )
	{
		int n, k;
		cin >> n >> k;
		vector <long long> a(n+1);
		for (int i = 1 ; i <= n ; i++)
		{
			cin >> a[i];
		}
		sort(a.begin()+1,a.end());
		long long x = 0, y = 0, lim = min(n-k,k);
		for (int i = 1 ; i <= lim ; i++)
		{
			x += a[i];
		}
		for (int i = lim + 1 ; i <= n ; i++)
		{
			y += a[i];
		}
		cout << y - x;
		if ( t != 0 )
		{
			cout << endl;
		}
	}
}
