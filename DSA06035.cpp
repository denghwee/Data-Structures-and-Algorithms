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
        int n, res = 0;
		cin >> n;
		int a[n+1], maxa[n+1], mina[n+1];
		maxa[n] = mina[n] = n;
		for (int i = 1; i <= n; i++)
		{
            cin >> a[i];
        }
		for (int i = n - 1; i >= 1; i--)
		{
			if ( a[i] > a[i+1] )
            {
				mina[i] = mina[i+1];
            }
			else
            {
				mina[i] = i;
            }
			if ( a[i] < a[i+1] )
            {
				maxa[i] = maxa[i+1];
            }
			else
            {
        		maxa[i] = i;
            }
		}
		for (int i = 1; i <= n; i++)
		{
			res = max(res,mina[maxa[i]]-i+1);
		}
		cout << res;
        if ( t != 0 )
        {
            cout << el;
        }
    }
}
