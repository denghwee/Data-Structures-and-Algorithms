//I'm HuyNho or you can call me Chimmey
#include <bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie();cout.tie();
#define matrix vector <vector<long long>>
#define MOD 1000000007
#define el "\n"
const long long big = 1e6;

void huyvanhungnguoiban(long long n, long long k) {
    if ( k > pow(2,n-1) )
    {
        huyvanhungnguoiban(n-1, k-pow(2,n-1));
    }
    else if ( k < pow(2,n-1) )
    {
        huyvanhungnguoiban(n-1, k);
    }
    else
    {
        cout << (char) ('A'+n-1);
    }
}

int main() {
	int t, test = 0;
	cin >> t;
	while ( t-- )
	{
		long long n, k;
        cin >> n >> k;
        huyvanhungnguoiban(n, k);
		{
			cout << el;
		}
	}
}
