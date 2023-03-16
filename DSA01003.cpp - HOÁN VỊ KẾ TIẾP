#include <bits/stdc++.h>
using namespace std;
#define faster(); ios_base::sync_with_stdio(false);cin.tie();cout.tie();

void next_Permu(vector <long long> &a, int n) {
    for (int i = n - 2 ; i >= 0 ; i--)
    {
        if ( a[i] < a[i+1] )
        {
            sort(a.begin()+i,a.end());
            swap(a[i],a[i+1]);
            break;
        }
    }
}

int main() {
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
        next_Permu(a,n);
        for (int i = 0 ; i < n ; i++)
        {
            cout << a[i] << " ";
        }
        if ( t != 0 )
        {
            cout << endl;
        }
    }
}
