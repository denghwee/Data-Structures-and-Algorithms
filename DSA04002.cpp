#include <bits/stdc++.h>
using namespace std;
#define faster(); ios_base::sync_with_stdio(false);cin.tie();cout.tie();
#define matrix vector <vector<long long>>
#define el "\n"
#define fi first
#define se second
const long long big = 1e6;
const long long MOD = 1000000007;

long long powDAC(long long a, long long b) {
	if (b == 0)
		return 1;
    if (b == 1)
        return a;

    long long half = powDAC(a, b / 2) % MOD;

    if (b & 1)
        return ((half * half) % MOD * a % MOD) % MOD;
    else
        return (half * half) % MOD;
}

int main() {
    faster();
    int t;
    cin >> t;
    while ( t-- )
    {
    	long long n;
    	cin >> n;
    	string s = to_string(n);
    	reverse(s.begin(),s.end());
    	long long k = stol(s);
		cout << powDAC(n,k);
    	if ( t != 0 )
    	{
    		cout << el;
		}
	}
}
