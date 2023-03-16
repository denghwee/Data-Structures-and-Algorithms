#include <bits/stdc++.h>
using namespace std;
#define faster(); ios_base::sync_with_stdio(false);cin.tie();cout.tie();

void check_And_Print_Out(vector <long long> a, int k, int n) {
    int cnt = 0;
    for (int i = 0 ; i < n ; i++)
    {
        if ( a[i] == 1 ) cnt++;
    }
    if ( cnt == k )
    {
        for (int i = 0 ; i < n ; i++)
        {
            cout << a[i];
        }
        cout << endl;
    }
}

int bit_Gen(vector <long long> &a, int n) {
    int i = n - 1;
    while ( i >= 0 && a[i] == 1 )
    {
        a[i] = 0;
        i--;
    }
    if ( i == -1 ) return 1;
    else
    {
        a[i] = 1;
        return 0;
    }
}

int main() {
    int t;
    cin >> t;
    while ( t-- )
    {
        int n, k, check;
        cin >> n >> k;
        vector <long long> a(n,0);
        do
        {
            check_And_Print_Out(a,k,n);
            check = bit_Gen(a,n);
        }
        while ( check == 0 );
    }
}
