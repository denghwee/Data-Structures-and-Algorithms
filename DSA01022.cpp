#include <bits/stdc++.h>
using namespace std;
#define faster(); ios_base::sync_with_stdio(false);cin.tie();cout.tie();

int main() {
    int t;
    cin >> t;
    while ( t-- )
    {
        int n;
        cin >> n;
        vector <long long> a(n);
        string b, c;
        for (int i = 0 ; i < n ; i++)
        {
            cin >> a[i];
            c += to_string(a[i]);
            b += to_string(i+1);
        }
        int cnt = 1;
        while ( b != c )
        {
            cnt++;
            next_permutation(b.begin(),b.end());
        }
        cout << cnt;
        if ( t != 0 )
        {
            cout << endl;
        }
    }
}
