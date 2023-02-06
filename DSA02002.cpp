#include <bits/stdc++.h>
using namespace std;
#define faster(); ios_base::sync_with_stdio(false);cin.tie();cout.tie();

void BackTracking(vector <long long> a, int n) {
    if ( n == 1 ) return;
    for (int i = 0 ; i < n ; i++)
    {
        a[i] += a[i+1];
    }
    BackTracking(a,n-1);
    cout << "[";
    for (int i = 0 ; i < n - 2 ; i++)
    {
        cout << a[i] << " ";
    }
    cout << a[n-2] << "]" << " ";
}

int main() {
    faster();
    int t;
    cin >> t;
    while ( t-- )
    {
        int n;
        cin >> n;
        vector <long long> a(n);
        for (int i = 0 ; i < n ; i++)
        {
            cin >> a[i];
        }
        BackTracking(a,n);
        cout << "[";
        for (int i = 0 ; i < n - 1 ; i++)
        {
            cout << a[i] << " ";
        }
        cout << a[n-1] << "]";
        if ( t != 0 )
        {
            cout << endl;
        }
    }
}
