#include <bits/stdc++.h>
using namespace std;
#define faster(); ios_base::sync_with_stdio(false);cin.tie();cout.tie();
#define matrix vector <vector<long long>>
#define MOD 1000000007
#define el "\n"
#define fi first
#define se second
const long long big = 1e6;

int count(int x, int y[], int n, int NoOfY[]) {
	if ( x == 0 )
	{
		return 0;
	}
	if ( x == 1 )
	{
		return NoOfY[0];
	}
	int idx = upper_bound(y, y + n, x) - y; // index of smallest number larger than x
	int ans = n - idx;
	ans += (NoOfY[0] + NoOfY[1]);
	if ( x == 2 )
	{
		ans -= (NoOfY[3] + NoOfY[4]);
	}
	if ( x == 3 )
	{
		ans += NoOfY[2];
	}
	return ans;
}

int main() {
	faster();
	int t;
	cin >> t;
	while ( t-- )
	{
		int m, n;
		cin >> m >> n;
		int x[m], y[n], NoOfY[5] = {}, sum = 0;
		for (int i = 0 ; i < m ; i++)
		{
			cin >> x[i];
		}
		for (int i = 0 ; i < n ; i++)
		{
			cin >> y[i];
		}
		for (int i = 0 ; i < n ; i++)
		{
			if ( y[i] < 5 )
			{
				NoOfY[y[i]]++;
			}
		}
		sort(y,y+n);
		for (int i = 0 ; i < m ; i++)
		{
			sum += count(x[i], y, n, NoOfY);
		}
		cout << sum;
		if ( t != 0 )
		{
			cout << endl;
		}
	}
}
