#include <bits/stdc++.h>
using namespace std;
#define faster(); ios_base::sync_with_stdio(false);cin.tie();cout.tie();

void BackTracking(vector <long long> a, int n) {
    if ( n == 0 ) return;
    cout << "[";
    for (int i = 0 ; i < n - 1 ; i++)
    {
        cout << a[i] << " ";
        a[i] += a[i+1];
    }
    cout << a[n-1] << "]";
    cout << endl;
    BackTracking(a,n-1);
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
        // if ( t != 0 )
        // {
        //     cout << endl;
        // }
    }
}
