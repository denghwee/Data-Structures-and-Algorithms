//Coded by group 6
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
		vector <int> a(n+1);
		pair <int,int> k;
		k.second = 1e9;
		map <int,int> m;
		for (int i = 1 ; i <= n ; i++)
		{
			cin >> a[i];
			if ( m[a[i]] == 0 )
			{
				m[a[i]] = i;
			}
			else if ( k.second > m[a[i]] )
			{
				k.first = a[i];
				k.second = m[a[i]];
			}
		}
		if ( k.second != 1e9 )
		{
			cout << k.first;
		}
		else
		{
			cout << "NO";
		}
		if ( t != 0 )
		{
			cout << el;
		}
	}
}
