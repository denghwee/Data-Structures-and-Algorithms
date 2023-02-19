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
        int n, k, check = 0;
        cin >> n >> k;
        vector <long long> a(n);
        for (int i = 0 ; i < n ; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(),a.end());
        for (int i = 0 ; i < n - 1 ; i++)
        {
            for (int j = i + 1 ; j < n ; j++)
            {
                if ( binary_search(a.begin()+j+1,a.end(),k-a[i]-a[j]) )
                {
                    check = 1;
                    break;
                }
            }
            if ( check == 1 ) break;
        }
        if ( check == 0 ) cout << "NO";
        else cout << "YES";
        if ( t != 0 )
        {
            cout << el;
        }
    }
}
