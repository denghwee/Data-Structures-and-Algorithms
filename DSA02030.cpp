#include <bits/stdc++.h>
using namespace std;
#define faster(); ios_base::sync_with_stdio(false);cin.tie();cout.tie();
#define matrix vector <vector<long long>>
#define MOD 1000000007
#define el "\n"
const long long big = 1e6;

string alphabet = " ABCDEFGHIJKLMNOPQRST";
char c;
int k, posc;
string x;

void Try(int pos) {
    for (int i = pos ; i <= posc ; i++)
    {
        if ( x.size() == k )
        {
            cout << x << endl;
            return;
        }
        x += alphabet[i];
        Try(i);
        x.erase(x.end()-1,x.end());
    }
}

int main() {
    cin >> c >> k;
    posc = c - 'A' + 1;
    Try(1);
}
