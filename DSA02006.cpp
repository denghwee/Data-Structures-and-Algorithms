#include <bits/stdc++.h>
using namespace std;
#define faster(); ios_base::sync_with_stdio(false);cin.tie();cout.tie();

long long a[101], b[101];
int n, k, check;

void Try(int posa, int posb, int sum) {
    for (int i = posa ; i < n ; i++)
    {
        if ( sum + a[i] == k )
        {
            check = 1;
            b[posb] = a[i];
            cout << "[" << b[0];
            for (int j = 1 ; j <= posb ; j++)
            {
                cout << " " << b[j];
            }
            cout << "] ";
            return;
        }
        else if ( sum + a[i] < k )
        {
            b[posb] = a[i]; 
            Try(i+1,posb+1,sum+a[i]);
        }
        else return;
    }
}

int main() {
    faster();
    int t;
    cin >> t;
    while ( t-- )
    {
        check = 0;
        cin >> n >> k;
        for (int i = 0 ; i < n ; i++)
        {
            cin >> a[i];
        }
        sort(a,a+n);
        Try(0,0,0);
        // cout << 1;
        if ( check == 0 )
        {
            cout << -1;
        }
        if ( t != 0 )
        {
            cout << endl;
        }
    }
}
