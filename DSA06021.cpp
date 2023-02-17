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
		int n, min1;
		bool check = true;
		cin >> n;
		vector <long long> a(n);
		for (int i = 0 ; i < n ; i++)
		{
			cin >> a[i];
		}
		sort(a.begin(),a.end());
		for (int i = 0 ; i < n - 1 ; i++)
		{
			if ( a[i] != a[i+1] )
			{
				min1 = a[i+1];
				check = false;
				break;
			}
		}
		if ( check == true )
		{
			cout << -1;
		}
		else
		{
			cout << a[0] << " " << min1;
		}
		if ( t != 0 )
		{
			cout << endl;
		}
	}
}
