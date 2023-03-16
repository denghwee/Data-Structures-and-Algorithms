#include <bits/stdc++.h>
using namespace std;
#define faster(); ios_base::sync_with_stdio(false);cin.tie();cout.tie();

int n, res = 0;
vector <int> binary, a;

void calc(int k) {
    int sum = 0;
    for (int i = 0 ; i < a.size() ; i++)
    {
        if ( binary[i] == 1 )
        {
            sum += a[i];
        }
    }
    if ( sum == k )
    {
        for (int i = 0 ; i < n ; i++)
        {
            if ( binary[i] == 1 )
            {
                cout << a[i] << " ";
            }
        }
        cout << endl;
        res++;
    }
}

int binaryGen() {
    int i = n - 1;
    while ( i >= 0 && binary[i] == 1 )
    {
        binary[i] = 0;
        i--;
    }
    if ( i == -1 ) return -1;
    else
    {
        binary[i] = 1;
        return 0;
    }
}

int main() {
    faster();
    cin >> n;
    int k;
    cin >> k;
    a.assign(n,0);
    binary.assign(n,0);
    for (int i = 0 ; i < n ; i++)
    {
        cin >> a[i];
    }
    int check1 = 0;
    do
    {
        calc(k);
        check1 = binaryGen();
    }
    while ( check1 >= 0 );
    cout << res;
}
