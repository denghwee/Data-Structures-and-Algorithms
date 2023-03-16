#include <bits/stdc++.h>
using namespace std;
#define faster(); ios_base::sync_with_stdio(false);cin.tie();cout.tie();
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
        long long n, k, res = 0;
        cin >> n >> k;
        vector <long long> a(n);
        for (int i = 0 ; i < n ; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(),a.end());
        for (int i = 0 ; i < n ; i++)
        {
            res += lower_bound(a.begin()+i+1,a.end(),a[i]+k) - a.begin() - i - 1;
        }
        cout << res;
        if ( t != 0 )
        {
            cout << endl;
        }
    }
} 
