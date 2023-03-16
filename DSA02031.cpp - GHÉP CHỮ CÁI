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

void print_Out(string x) {
    for (int i = 1 ; i < x.size() - 1 ; i++)
    {
        if ( x[i] == 'A'  || x[i] == 'E' )
        {
            if ( x[i-1] != 'A' && x[i-1] != 'E' && x[i+1] != 'A' && x[i+1] != 'E' )
            {
                return;
            }
        }   
    }
    cout << x << endl;
}

int main() {
    cin >> c;
    posc = c - 'A' + 1;
    for (int i = 1 ; i <= posc ; i++)
    {
        x += alphabet[i];
    }
    do
    {
        print_Out(x);
    }
    while ( next_permutation(x.begin(),x.end()) );
}
