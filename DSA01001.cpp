#include <bits/stdc++.h>
using namespace std;
#define faster(); ios_base::sync_with_stdio(false);cin.tie();cout.tie();

void binaryGen(string &s) {
    int i = s.size() - 1;
    while ( i >= 0 && s[i] == '1' )
    {
        s[i] = '0';
        i--;
    }
    if ( i != -1 )
    {
        s[i] = '1';
    }
}

int main() {
    faster();
    int t;
    cin >> t;
    while ( t-- )
    {
        string s;
        cin >> s;
        binaryGen(s);
        cout << s;
        if ( t != 0 )
        {
            cout << endl;
        }
    }
}
