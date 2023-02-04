#include <bits/stdc++.h>
using namespace std;
#define faster(); ios_base::sync_with_stdio(false);cin.tie();cout.tie();

void initiate(string &s, int n) {
    for (int i = 0 ; i < n ; i++)
    {
        s += 'H';
    }
}

void check_And_Print_Out(string s, int n, vector <string> &res) {
    int check = 0;
    if ( s[0] != 'H' || s[n-1] == 'H' ) return;
    else
    {
        for (int i = 0 ; i < n ; i++)
        {
            if ( s[i] == 'H' && s[i+1] == 'H' )
            {
                check = 1;
            }
        }
    }
    if ( check == 0 )
    {
        res.push_back(s);
    }
    return;
}

int bit_Gen(string &s, int n) {
    int i = n - 1;
    while ( i >= 0 && s[i] == 'A' )
    {
        s[i] = 'H';
        i--;
    }
    if ( i == -1 ) return 1;
    else
    {
        s[i] = 'A';
        return 0;
    }
}

int main() {
    int t;
    cin >> t;
    while ( t-- )
    {
        int n, check;
        cin >> n;
        string s;
        vector <string> res;
        initiate(s,n);
        do
        {
            check_And_Print_Out(s,n,res);
            check = bit_Gen(s,n);
        }
        while ( check == 0 );
        for (int i = res.size() - 1 ; i >= 0 ; i--)
        {
            cout << res[i] << endl;
        }
    }
}
