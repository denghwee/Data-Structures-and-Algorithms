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
		int n1, n2, n3;
		cin >> n1 >> n2 >> n3;
		vector <long long> a1, a2, a3, res;
		a1.assign(n1,0);
		a2.assign(n2,0);
		a3.assign(n3,0);
		for (int i = 0 ; i < n1 ; i++)
		{
			cin >> a1[i];
		}
		for (int i = 0 ; i < n2 ; i++)
		{
			cin >> a2[i];
		}
		for (int i = 0 ; i < n3 ; i++)
		{
			cin >> a3[i];
		}
		int i = 0, j = 0, k = 0;
		while ( i < n1 && j < n2 && k < n3 )
		{
			if ( a1[i] == a2[j] && a2[j] == a3[k] )
			{
				res.push_back(a1[i]);
				i++;
				j++;
				k++;
			}
			else if ( a1[i] < a2[j] )
			{
				i++;
			}
			else if ( a2[j] < a3[k] )
			{
				j++;
			}
			else
			{
				k++;
			}
		}
		if ( res.empty() )
		{
			cout << "NO";
		}
		else
		{
			for (int i = 0 ; i < res.size() ; i++)
			{
				cout << res[i] << " ";
			}
		}
		if ( t != 0 )
		{
			cout << endl;
		}
	}
}
