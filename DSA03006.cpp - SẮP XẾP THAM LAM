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
		int n, check = 0;
		cin >> n;
		vector <long long> a(n);
		vector <long long> b(n);
		for (int i = 0 ; i < n ; i++)
		{
			cin >> a[i];
			b[i] = a[i];
		}
		sort(a.begin(),a.end());
		for (int i = 0 ; i < n ; i++)
		{
			if ( a[i] != b[i] && a[i] != b[n-i-1] )
			{
				check = 1;
				break;
			}
		}
		if ( check == 1 )
			cout << "No";
		else
			cout << "Yes";
		if ( t != 0 )
		{
			cout << endl;
		}
	}
}
