//I'm HuyNho or you can call me Chimmey
#include <bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie();cout.tie();
#define matrix vector <vector<long long>>
#define MOD 1000000007
#define el "\n"
const long long big = 1e6;

long long POW(long long a, long long b) {
    if ( b == 0 )
    {
        return 1;
    }
	if ( b == 1 )
    {
        return a;
    }
    long long half = POW(a, b/2);
    if ( b & 1 )
    {
        return ((half * half) % MOD * a % MOD) % MOD;
    }
    else
    {
        return (half * half) % MOD;
    }
}

int main() {
	faster();
	while ( true )
	{
		long long a, b;
        cin >> a >> b;
        if ( a == 0 && b == 0 )
        {
            return 0;
        }
        cout << POW(a,b) << endl ;
	}
}
