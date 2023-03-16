//I'm HuyNho or you can call me Chimmey
#include <bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie();cout.tie();
#define matrix vector <vector<long long>>
#define mod 1000000007
#define el "\n"
const long long big = 1e6;

long long n, F[2][2], M[2][2];

void initiate() {
	F[0][0] = F[0][1] = F[1][0] = 1;
	F[1][1] = 0;
	M[0][0] = M[0][1] = M[1][0] = 1;
	M[1][1] = 0;
}

void MUL(long long f[2][2], long long m[2][2]) {
	long long x = (f[0][0]*m[0][0]%mod + f[0][1]*m[1][0]%mod)%mod;
	long long y = (f[0][0]*m[0][1]%mod + f[0][1]*m[1][1]%mod)%mod;
	long long z = (f[1][0]*m[0][0]%mod + f[1][1]*m[1][0]%mod)%mod;
	long long t = (f[1][0]*m[0][1]%mod + f[1][1]*m[1][1]%mod)%mod;
	F[0][0] = x; F[0][1] = y;
	F[1][0] = z; F[1][1] = t;
}

void POW(long long f[2][2], long long n) {
	if ( n <= 1 ) return;
	POW(f,n/2);
	MUL(f,f);
	if (n&1) MUL(f,M);
}

void solve() {
	cin >> n;
	initiate();
	POW(F,n);
	cout << F[0][1];
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
			cout << endl;
		}
	}
}
