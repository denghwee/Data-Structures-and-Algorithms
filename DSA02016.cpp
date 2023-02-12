#include <bits/stdc++.h>
using namespace std;
#define faster(); ios_base::sync_with_stdio(false);cin.tie();cout.tie();
#define matrix vector <vector<long long>>
#define MOD 1000000007
#define el "\n"
const long long big = 1e6;

int n, ans = 0, c1[50], c2[50], c3[50];

void Try(int x) {
    if ( x == n + 1 )
    {
        ans++;
        return;
    }
    for (int i = 1 ; i <= n ; i++)
    {
        if ( c1[i] == 0 && c2[i + x] == 0 && c3[x - i + n] == 0 )
        {
            c1[i] = c2[i + x] = c3[x - i + n] = 1;
            Try(x + 1);
            c1[i] = c2[i + x] = c3[x - i + n] = 0;
        }
    }
}

int main() {
    faster();
    int t;
    cin >> t;
    while ( t-- )
    {
        ans = 0;
        for (int i = 0 ; i <= 20 ; i++)
        {
            c1[i] = c2[i] = c3[i] = 0;
        }
        cin >> n;
        Try(1);
        cout << ans;
        if ( t != 0 )
        {
            cout << endl;
        }
    }
}
