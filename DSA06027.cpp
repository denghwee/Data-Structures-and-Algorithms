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
		int n, tt = 0;
		cin >> n;
		vector <long long> a(n);
		vector <string> ans;
		string res;
		for (int i = 0 ; i < n ; i++)
		{
			cin >> a[i];
		}
		for (int i = 0 ; i < n - 1 ; i++)
		{     
			for (int j = i + 1 ; j < n ; j++)
			{
				if ( a[j] < a[i] )
				{
					swap(a[j],a[i]);
				}
			}
			tt++;
			res = "";
			res += ("Buoc " + to_string(tt) + ": ");
			string tmp;
			for (int h = 0 ; h < n ; h++)
			{
				tmp += (to_string(a[h]) + " ");
			}
			res += tmp;
			ans.push_back(res);
		}
		for (int i = ans.size() - 1 ; i >= 0 ; i--)
		{
			cout << ans[i] << endl;
		}
	}
}
