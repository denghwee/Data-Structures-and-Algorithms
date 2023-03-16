//I'm HuyNho or you can call me Chimmey
#include <bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie();cout.tie();
#define matrix vector <vector<long long>>
#define MOD 123456789
#define el "\n"
const long long big = 1e6;

long long huyvanhungnguoiban(long long n, long long k) {
	if ( k == 1 )
    {
        return n;
    }
    long long half = huyvanhungnguoiban(n, k / 2);
    if ( k & 1 )
    {
        return ((half * half) % MOD * n % MOD) % MOD;
    }
    else
    {
        return (half * half) % MOD;
    }
}

int main() {
	int t, test = 0;
	cin >> t;
	while ( t-- )
	{
		long long n;
        cin >> n;
        cout << huyvanhungnguoiban(2, n-1);
		if ( t != 0 )
		{
			cout << el;
		}
	}
}
