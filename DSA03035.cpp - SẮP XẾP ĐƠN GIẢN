#include <bits/stdc++.h>
using namespace std;
#define faster(); ios_base::sync_with_stdio(false);cin.tie();cout.tie();
#define matrix vector <vector<long long>>
#define MOD 1000000007
#define el "\n"
#define fi first
#define se second
const long long big = 1e6;

int main() {
    faster();
    int t = 1;
    // cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        int s = -1;
        vector<int> a(n + 5), f(n + 5, 0);
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        for (int i = 1; i <= n; i++)
        {
            f[a[i]] = f[a[i] - 1] + 1;
            s = max(s, f[a[i]]);
        }
        cout << n - s;
        if (t != 0)
        {
            cout << endl;
        }
    }
}
