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
	int n;
	cin >> n;
	vector <long long> a(n);
	for (int i = 0 ; i < n ; i++)
	{
		cin >> a[i];
	}
	int cnt = 1, MAX = -1;
	for (int i = 0 ; i < n - 1 ; i++)
	{
		if ( a[i] < a[i+1] )
		{
			cnt++;
		}
		else
		{
			MAX = max(MAX,cnt);
			cnt = 0;
		}
	}
	cout << MAX;
}
