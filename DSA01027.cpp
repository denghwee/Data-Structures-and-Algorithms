#include <bits/stdc++.h>
using namespace std;
#define faster(); ios_base::sync_with_stdio(false);cin.tie();cout.tie();

int main() {
    faster();
    int n;
    cin >> n;
    vector <long long> a(n);
    for (int i = 0 ; i < n ; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    do
    {
        for (int i = 0 ; i < n ; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    while ( next_permutation(a.begin(),a.end()) );
}
