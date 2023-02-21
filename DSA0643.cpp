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
        int n, res = -1;
        cin >> n;
        vector <long long> a(n+1,0);
        vector <long long> b(n+1,0);
        for (int i = 1 ; i <= n ; i++)
        {
            cin >> a[i];
            b[i] = b[i-1] + a[i];
        }
        for (int i = 1 ; i <= n ; i++)
        {
            if ( b[i-1] == b[n] - b[i] )
            {
                res = i;
                break;
            }
        }
        cout << res;
        if ( t != 0 )
        {
            cout << el;
        }
    }
}
