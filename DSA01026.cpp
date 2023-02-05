#include <bits/stdc++.h>
using namespace std;
#define faster(); ios_base::sync_with_stdio(false);cin.tie();cout.tie();

void initiate(string &s, int n) {
    for (int i = 0 ; i < n ; i++)
    {
        s += '8';
    }
}

void check_And_Print_Out(string s, int n, vector <string> &res) {
    int check = 0;
    if ( s[0] != '8' || s[n-1] != '6' ) return;
    else
    {
        for (int i = 0 ; i < n ; i++)   
        {
            if ( s[i] == '8' && s[i+1] == '8' )
            {
                check = 1;
            }
            if ( s[i] == '6' && s[i+1] == '6' && s[i+2] == '6' && s[i+3] == '6' )
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
    while ( i >= 0 && s[i] == '6' )
    {
        s[i] = '8';
        i--;
    }
    if ( i == -1 ) return 1;
    else
    {
        s[i] = '6';
        return 0;
    }
}

int main() {
    faster();
    int t = 1;
    // cin >> t;   
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
