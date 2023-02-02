#include <bits/stdc++.h>
using namespace std;
#define faster(); ios_base::sync_with_stdio(false);cin.tie();cout.tie();

void next_Combination(vector <long long> &a, int n, int k) {
    for (int i = k ; i >= 1 ; i--)
    {
        if ( a[i] != n - k + i )
        {
            a[i]++;
            for (int j = i + 1 ; j <= k ; j++)
            {
                a[j] = a[j-1] + 1;
            }
            break;
        }
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
        next_Combination(a,n,k);
        for (int i = 1 ; i <= k ; i++)
        {
            cout << a[i] << " ";
        }
        if ( t != 0 )
        {
            cout << endl;
        }
    }
}
