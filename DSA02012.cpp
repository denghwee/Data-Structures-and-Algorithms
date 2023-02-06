#include <bits/stdc++.h>
using namespace std;
#define faster(); ios_base::sync_with_stdio(false);cin.tie();cout.tie();
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
        int m, n, x;
        cin >> m >> n;
        long long a[m+1][n+1] = {};
        a[0][1] = 1;
        for (int i = 1 ; i <= m ; i++)
        {
            for (int j = 1 ; j <= n ; j++)
            {
                cin >> x;
                a[i][j] = a[i-1][j] + a[i][j-1];
            }
        }
        cout << a[m][n];
        if ( t != 0 )
        {
            cout << endl;
        }
    }
}
