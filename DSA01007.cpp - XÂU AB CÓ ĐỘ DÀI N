#include <bits/stdc++.h>
using namespace std;
#define faster(); ios_base::sync_with_stdio(false);cin.tie();cout.tie();

void initiate(string &s, int n) {
    for (int i = 0 ; i < n ; i++)
    {
        s = s + 'A';
    }
}

void print_Out(string s) {
    cout << s << " ";
}

int bit_Gen(string &s, int n) {
    int i = n - 1;
    while ( i >= 0 && s[i] == 'B' )
    {
        s[i] = 'A';
        i--;
    }
    if ( i == -1 ) return 1;
    else
    {
        s[i] = 'B';
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
        string s = "";
        initiate(s,n);
        do
        {
            print_Out(s);
            check = bit_Gen(s,n);
        }
        while ( check == 0 );
        if ( t != 0 )
        {
            cout << endl;
        }
    }
}
