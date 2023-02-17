#include <bits/stdc++.h>
using namespace std;
#define faster(); ios_base::sync_with_stdio(false);cin.tie();cout.tie();
#define matrix vector <vector<long long>>
#define MOD 1000000007
#define el "\n"
#define fi first
#define se second
const long long big = 1e6;

bool cmp(pair <int,int> a, pair <int,int> b) {
	if ( a.fi < b.fi ) return true;
	if ( a.se > b.se ) return true;
	return false;
}

int main() {
	faster();
	int t;
	cin >> t;
	while ( t-- )
	{
		int n;
		cin >> n;
		vector <long long> a(n);
		vector <pair <long long,long long>> res;
		int b[100005] = {};
		for (int i = 0 ; i < n ; i++)
		{
			cin >> a[i];
			b[a[i]]++;
		}
		for (int i = 0 ; i <= 100000 ; i++)
		{
			if ( b[i] != 0 )
			{
				res.push_back({b[i],i});
			}
		}
		stable_sort(res.rbegin(),res.rend(),cmp);
		for (int i = 0 ; i < res.size() ; i++)
		{
			while ( res[i].fi != 0 )
			{
				res[i].fi--;
				cout << res[i].se << " ";
			}
		}
		if ( t != 0 )
		{
			cout << endl;
		}
	}
}
