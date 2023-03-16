#include <bits/stdc++.h>
using namespace std;
#define faster(); ios_base::sync_with_stdio(false);cin.tie();cout.tie();
#define matrix vector <vector<long long>>
#define MOD 1000000007
#define el "\n"
const long long big = 1e6;

vector <int> a = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};

int main() {
    faster();
    int t;
    cin >> t;
    while ( t-- )
    {
        int n, res = 0;
        cin >> n;
        while ( n > 0 )
        {
            if ( n == a[lower_bound(a.begin(),a.end(),n) - a.begin()] )
            {
                n -= a[lower_bound(a.begin(),a.end(),n) - a.begin()];
            }
            else
            {
                n -= a[lower_bound(a.begin(),a.end(),n) - a.begin()-1];
            }
            res++;
        }
        cout << res;
        if ( t != 0 )
        {
            cout << endl;
        }
    }
}
