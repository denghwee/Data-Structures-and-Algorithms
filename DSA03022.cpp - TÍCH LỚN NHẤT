#include <bits/stdc++.h>
using namespace std;
#define faster(); ios_base::sync_with_stdio(false);cin.tie();cout.tie();
#define matrix vector <vector<long long>>
#define MOD 1000000007
#define el "\n"
const long long big = 1e6;

int main() {
	int n;
	cin >> n;
	vector <long long> a(n);
	for (int i = 0 ; i < n ; i++)
	{
		cin >> a[i];
	}
	sort(a.begin(),a.end());
	cout << max(a[0]*a[1]*a[n-1],max(a[0]*a[1],max(a[n-1]*a[n-2]*a[n-3],a[n-1]*a[n-2])));
}
