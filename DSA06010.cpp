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
		vector <string> a(n);
		vector <int> b(10,0);
		for (int i = 0 ; i < n ; i++)
		{
			cin >> a[i];
		}
		for (int i = 0 ; i < n ; i++)
		{
			for (int j = 0 ; j < a[i].size() ; j++)
			{
				b[a[i][j]-'0']++;
			}
		}
		for (int i = 0 ; i < 10 ; i++)
		{
			if ( b[i] != 0 )
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
