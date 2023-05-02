//I'm HuyNho or you can call me DengHwee
#include <bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie();cout.tie();
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
		int n, k;
        cin >> n >> k;
        long long a[n] = {};
		long long b[n];
        for (int i = 0 ; i < min(n, k) ; i++)
        {
			a[i] = 1;
		}
        b[0] = 1;
        for (int i = 1 ; i < n ; i++)
        {
            if ( i <= k )
			{
                a[i] = (a[i] + b[i - 1]) % MOD;
			}
            else
            {
                long long m = (b[i - 1] - b[i - k - 1]) % MOD;
                if ( m < 0 )
				{
                    m += MOD;
				}
                a[i] = (a[i] + m) % MOD;
            }
            b[i] = (b[i - 1] + a[i]) % MOD;
        }
        cout << a[n - 1];
		if ( t != 0 )
		{
			cout << el;
		}
	}
}
