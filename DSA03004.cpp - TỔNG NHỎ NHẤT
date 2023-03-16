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
		int n;
		cin >> n;
		vector <long long> a(n);
		for (int i = 0 ; i < n ; i++)
		{
			cin >> a[i];
		}
		sort(a.begin(),a.end());
		int check = 0;
		long long x = 0, y = 0, tmp = 1;
		for (int i = n - 1 ; i >= 0 ; i--)
		{
			if ( check == 0 )
			{
				x += a[i] * tmp;
				check = 1;
			}
			else
			{
				y += a[i] * tmp;
				check = 0;
				tmp *= 10;
			}
		}
		cout << x + y;
		if ( t != 0 )
		{
			cout << endl;
		}
	}
}
