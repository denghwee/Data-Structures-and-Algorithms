#include <bits/stdc++.h>
using namespace std;
#define faster(); ios_base::sync_with_stdio(false);cin.tie();cout.tie();

void next_Combination(vector <long long> a, vector <long long> b, int k, int n) {
    int check = 0;
    for (int i = k ; i > 0 ; i--)
    {
        if ( a[i] != n - k + i )
        {
            a[i]++;
            for (int j = i + 1 ; j <= k ; j++)
            {
                a[j] = a[j-1] + 1;
            }
            check = 1;
            break;
        }
    }
    if ( check == 0 )
    {
        cout << k;
    }
    else
    {
        vector <long long> c(1000,0);
        for (int i = 1 ; i <= k ; i++)
        {
            c[b[i]]++;
        }
        int res = 0;
        for (int i = 1 ; i <= k ; i++)
        {
            if ( c[a[i]] == 0 )
            {
                res++;
            }
        }
        cout << res;
    }
}

int main() {
    int t;
    cin >> t;
    while ( t-- )
    {
        int n, k;
        cin >> n >> k;
        vector <long long> a(k+1);
        for (int i = 1 ; i <= k ; i++)
        {
            cin >> a[i];
        }
        next_Combination(a,a,k,n);
        if ( t != 0 )
        {
            cout << endl;
        }
    }
}
