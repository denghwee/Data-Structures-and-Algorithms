#include <bits/stdc++.h>
using namespace std;
#define faster(); ios_base::sync_with_stdio(false);cin.tie();cout.tie();

void initiate(vector <long long> &a, int n) {
    for (int i = 0 ; i < n ; i++)
    {
        a[i] = n - i;
    }
}

void print_Out(vector <long long> a, int n) {
    for (int i = 0 ; i < n ; i++)
    {
        cout << a[i];
    }
    cout << " ";
}

int main() {
    int t;
    cin >> t;
    while ( t-- )
    {
        int n;
        cin >> n;
        vector <long long> a(n);
        initiate(a,n);
        do
        {
            print_Out(a,n);
        }
        while ( prev_permutation(a.begin(),a.end()) );
        
        if ( t != 0 )
        {
            cout << endl;
        }
    }
}
