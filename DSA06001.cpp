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
		int n;
		cin >> n;
		vector <long long> a(n);
		vector <long long> b;
		for (int i = 0 ; i < n ; i++)
		{
			cin >> a[i];
		}
		sort(a.rbegin(),a.rend());
		for (int i = 0 ; i < n / 2 + 1 ; i++)
		{
			b.push_back(a[i]);
			b.push_back(a[n-i-1]);
		}
		for (int i = 0 ; i < n ; i++)
		{
			cout << b[i] << " ";
		}
		if ( t != 0 )
		{
			cout << endl;
		}
	}
}
