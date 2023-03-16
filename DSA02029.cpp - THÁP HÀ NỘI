#include <bits/stdc++.h>
using namespace std;
#define faster(); ios_base::sync_with_stdio(false);cin.tie();cout.tie();
#define matrix vector <vector<long long>>
#define MOD 1000000007
#define el "\n"
const long long big = 1e6;

int n, ans = 0, c1[50], c2[50], c3[50];

void Tower(int n, char a, char b, char c) {
    if ( n == 1 )
    {
        cout << a << " -> " << c << endl;
        return;
    }
    Tower(n - 1, a, c, b);
    Tower(1, a, b, c);
    Tower(n - 1, b, a, c);
}

int main() {
    faster();
    cin >> n;
    char a = 'A', b = 'B', c = 'C';
    Tower(n,a,b,c);
}
