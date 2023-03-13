//I'm HuyNho or you can call me Chimmey
#include <bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie();cout.tie();
#define matrix vector <vector<long long>>
#define mod 1000000007
#define el "\n"
const long long big = 1e6;

long long n, k, F[100][100], M[100][100];

void MUL(long long x[100][100], long long y[100][100]) {
    long long ans[100][100];
	for (int i = 0 ; i < n ; i++)
	{
        for (int j = 0 ; j < n ; j++)
		{
			long long res = 0;
			for (int k = 0 ; k < n ; k++)
			{
                res += (x[i][k] * y[k][j]) % mod;
                res %= mod;
            }
            ans[i][j] = res;
        }
    }
    for (int i = 0 ; i < n ; i++)
	{
		for (int j = 0 ; j < n ; j++)
		{
			F[i][j] = ans[i][j];
		}
	}
}

void POW(long long F[100][100], long long k) {
	if ( k <= 1 ) return;
	POW(F,k/2);
	MUL(F,F);
	if (k&1) MUL(F,M);
}

void solve() {
	cin >> n >> k;
	for (int i = 0 ; i < n ; i++)
	{
		for (int j = 0 ; j < n ; j++)
		{
			cin >> F[i][j];
			M[i][j] = F[i][j];
		}
	}
	POW(F,k);
    long long res = 0;
	for (int i = 0 ; i < n ; i++)
	{
        res = (res % mod + F[i][n-1] % mod) % mod;
	}
    cout << res;
}

int main() {
	faster();
	int t;
	cin >> t;
	while ( t-- )
	{
		solve();
        if ( t != 0 )
        {
            cout << el;
        }
	}
}
