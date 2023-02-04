#include <bits/stdc++.h>
using namespace std;
#define faster(); ios_base::sync_with_stdio(false);cin.tie();cout.tie();

void initiate(vector <long long> &a, int k) {
    for (int i = 1 ; i <= k ; i++)
    {
        a[i] = i;
    }
}

void next_Combination(vector <long long> &a, int k, int n) {
    int j = k;
    while ( j >= 1 && a[j] == n - k + j ) j--;
    if ( j == 0 )
    {
        for (int i = 1 ; i <= k ; i++)
        {
            a[i] = i;
        }
    }
    else
    {
        a[j]++;
        for (int i = j + 1 ; i <= k ; i++)
        {
            a[i] = a[i-1] + 1;
        }
    }
}

int cmp_Combination(vector <long long> a, vector <long long> b, int k) {
    for (int i = 1 ; i <= k ; i++)
    {
        if ( a[i] != b[i] )
        {
            return 1;
        }
    }
    return 0;
}

int main() {
    int t;
    cin >> t;
    while ( t-- )
    {
        int n, k;
        cin >> n >> k;
        vector <long long> a(k+1);
        vector <long long> b(k+1);
        initiate(b,k);
        for (int i = 1 ; i <= k ; i++)
        {
            cin >> a[i];
        }
        int res = 1;
        do
        {
            if ( cmp_Combination(a,b,k) == 0 )
            {
                cout << res;
                break;
            }
            res++;
            next_Combination(b,k,n);
        }
        while ( true );
        if ( t != 0 )
        {
            cout << endl;
        }
    }
}
