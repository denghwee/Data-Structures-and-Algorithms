#include <bits/stdc++.h>
using namespace std;
#define faster(); ios_base::sync_with_stdio(false);cin.tie();cout.tie();

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

void print_Out(vector <long long> a, vector <long long> pos, int k) {
    for (int i = 1 ; i <= k ; i++)
    {
        cout << a[pos[i]] << " ";
    }
    cout << endl;
}

int main() {
    faster();
    int n, k;
    cin >> n >> k;
    vector <long long> a(n+1);
    vector <long long> pos(n+1);
    for (int i = 1 ; i <= n ; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    for (int i = 1 ; i < n ; i++)
    {
        if ( a[i] == a[i+1] )
        {
            a.erase(a.begin()+i);
            n--;
            i--;
        }
    }
    initiate(pos,k);
    int check;
    do
    {
        print_Out(a,pos,k);
        check = combination_Gen(pos,k,n);
    }
    while ( check == 0 );
}
