#include <bits/stdc++.h>
using namespace std;
#define faster(); ios_base::sync_with_stdio(false);cin.tie();cout.tie();

string alphabet = " ABCDEFGHIJKLMNOPQRST";

void initiate(vector <long long> &a, int k) {
    for (int i = 1 ; i <= k ; i++)
    {
        a[i] = i;
    }
}

int combination_Gen(vector <long long> &a, int k, int n) {
    int j = k;
    while ( j >= 1 && a[j] == n - k + j ) j--;
    if ( j == 0 )
    {
        for (int i = 1 ; i <= k ; i++)
        {
            a[i] = i;
        }
        return 1;
    }
    else
    {
        a[j]++;
        for (int i = j + 1 ; i <= k ; i++)
        {
            a[i] = a[i-1] + 1;
        }
        return 0;
    }
}

void print_Out(vector <long long> a, int k) {
    for (int i = 1 ; i <= k ; i++)
    {
        cout << alphabet[a[i]];
    }
    cout << endl;
}

int main() {
    faster();
    int t;
    cin >> t;
    while ( t-- )
    {
        int n, k, check;
        cin >> n >> k;
        vector <long long> a(k+1);
        initiate(a,k);
        do
        {
            print_Out(a,k);
            check = combination_Gen(a,k,n);
        }
        while ( check == 0 );
        // if ( t != 0 )
        // {
        //     cout << endl;
        // }
    }
}
