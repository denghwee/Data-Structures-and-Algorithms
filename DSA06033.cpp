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
		pair <int, int> a[n];
		for (int i = 0 ; i < n ; i++)
		{
			cin >> a[i].first;
			a[i].second = i;
		}
		sort(a,a+n);
		int ans = -1, Min = a[0].second, k = a[0].first;
		for (int i = 1 ; i < n ; i++)
		{
			ans = max(ans,a[i].second-Min);
			if ( Min > a[i].second )
			{
				Min = a[i].second;
				k = a[i].first;
			}
		}
		cout << ans << endl;
	}
}
