//I'm HuyNho or you can call me DengHwee
#include <bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie();cout.tie();
#define matrix vector <vector<long long>>
#define MOD 1000000007
#define el "\n"
const long long big = 1e6;

int main() {
    faster();
	int t;
	cin >> t;
	while ( t-- )
	{
		long long n, x;
        cin >> n >> x;
        vector <long long> a(n);
        for (int i = 0 ; i < n ; i++)
        {
            cin >> a[i];
        }
        long long pos = lower_bound(a.begin(),a.end(),x) - a.begin();
        if ( a[pos] == x )
        {
            cout << pos + 1;
        }
        else if ( pos == 0 )
        {
            cout << -1;
        }
        else
        {
            cout << pos;
        }
        if ( t != 0 )
		{
			cout << el;
		}
	}
}
