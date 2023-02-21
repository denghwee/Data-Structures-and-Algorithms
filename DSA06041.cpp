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
        int n;
        cin >> n;
        vector <long long> a(n);
        vector <long long> b(1000005,0);
        for (int i = 0 ; i < n ; i++)
        {
            cin >> a[i];
            b[a[i]]++;
        }
        int MIN = 0, res = -1;
        for (int i = 0 ; i <= 1000000 ; i++)
        {
            if ( MIN < b[i] )
            {
                MIN = b[i];
                res = i;
            }
        }
        if ( res == -1 || MIN <= n/2 )
        {
            cout << "NO";
        }
        else
        {
            cout << res;
        }
        if ( t != 0 )
        {
            cout << el;
        }
    }
}
