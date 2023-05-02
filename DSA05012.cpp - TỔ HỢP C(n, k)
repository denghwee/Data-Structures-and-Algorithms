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

int dp[1001][1001];

void Sieve() {
    for (int i = 0 ; i <= 1000 ; i++)
    {
        for (int j = 0 ; j <= i ; j++)
        {
            if ( i == j || j == 0 ) dp[i][j] = 1;
            else dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
            dp[i][j] %= MOD;
        }
    }
}

int main() {
    Sieve();
    int t;
    cin >> t;
    while ( t-- )
    {
        int n, k;
        cin >> n >> k;
        cout << dp[n][k];
        if ( t != 0 )
        {
            cout << el;
        }
    }
}
