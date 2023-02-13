#include <bits/stdc++.h>
using namespace std;
#define faster(); ios_base::sync_with_stdio(false);cin.tie();cout.tie();
#define matrix vector <vector<long long>>
#define MOD 1000000007
#define el "\n"
const long long big = 1e6;

int main() {
    faster();
    string a, b;
    cin >> a >> b;
    int c, d;

    //Min
    for (int i = 0 ; i < a.size() ; i++)
    {
        if ( a[i] == '6' ) a[i] = '5';
    }
    for (int i = 0 ; i < b.size() ; i++)
    {
        if ( b[i] == '6' ) b[i] = '5';
    }
    c = stoi(a);
    d = stoi(b);
    cout << c + d << " ";

    //Max
    for (int i = 0 ; i < a.size() ; i++)
    {
        if ( a[i] == '5' ) a[i] = '6';
    }
    for (int i = 0 ; i < b.size() ; i++)
    {
        if ( b[i] == '5' ) b[i] = '6';
    }
    c = stoi(a);
    d = stoi(b);
    cout << c + d;
}
