#include <bits/stdc++.h>
using namespace std;
#define faster(); ios_base::sync_with_stdio(false);cin.tie();cout.tie();

void prev_Bit(string s) {
    for (int i = s.size() - 1 ; i >= 0 ; i--)
    {
        if ( s[i] == '0' ) s[i] = '1';
        else
        {
            s[i] = '0';
            break;
        }
    }
    cout << s;
}

int main() {
    int t;
    cin >> t;
    while ( t-- )
    {
        string s;
        cin >> s;
        prev_Bit(s);
        if ( t != 0 )
        {
            cout << endl;
        }
    }
}
