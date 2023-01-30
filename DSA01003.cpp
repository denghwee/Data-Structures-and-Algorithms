#include <bits/stdc++.h>
using namespace std;
#define faster(); ios_base::sync_with_stdio(false);cin.tie();cout.tie();

int main() {
    faster();
    int t;
    cin >> t;
    while ( t-- )
    {
        int n;
        cin >> n;
        string s;
        for (int i = 0 ; i < n ; i++)
        {
            int x;
            cin >> x;
            s += to_string(x);
        }
        next_permutation(s.begin(),s.end());
        for (int i = 0 ; i < n ; i++)
        {
            cout << s[i] << " ";
        }
        if ( t != 0 )
        {
            cout << endl;
        }
    }
}
