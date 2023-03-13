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
        bool check = true;
        cin >> n;
        long long res = n;
        for (int i = 0 ; i < n ; i++)
        {
            cin >> x;
            if ( check == true && x == 1 )
            {
                res = i;
                check = false;
            }
        }
        cout << res;
        if ( t != 0 )
		{
			cout << el;
		}
	}
}
