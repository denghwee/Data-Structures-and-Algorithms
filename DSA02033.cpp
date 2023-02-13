#include <bits/stdc++.h>
using namespace std;
#define faster(); ios_base::sync_with_stdio(false);cin.tie();cout.tie();
#define matrix vector <vector<long long>>
#define MOD 1000000007
#define el "\n"
const long long big = 1e6;

int check[50], n;

void Try(string s) {
    int k = s.size();
    if ( k == n )
    {
        cout << s << endl;
    }
    for (int i = 1 ; i <= n ; i++)
    {
        if ( k == 0 || (!check[i] && abs(s[k - 1] - '0' - i) != 1) )
        {
            check[i] = 1;
            Try(s+to_string(i));
            check[i] = 0;
        }
    }
}

int main() {
    int t;
    cin >> t;
    while ( t-- )
    {
        cin >> n;
        Try("");
    }
}
