#include <bits/stdc++.h>
using namespace std;
#define faster(); ios_base::sync_with_stdio(false);cin.tie();cout.tie();

int n;
vector <int> binary;

void check() {
    int len = binary.size();
    bool check1 = true;
    for (int i = 0 ; i < len ; i++)
    {
        if ( binary[i] != binary[len-i-1] )
        {
            check1 = false;
            break;
        }
    }
    if ( check1 == true )
    {
        for (int i = 0 ; i < len ; i++)
        {
            cout << binary[i] << " ";
        }
        cout << endl;
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
    binary.assign(n,0);
    int check1 = 0;
    do
    {
        check();
        check1 = binaryGen();
    }
    while ( check1 >= 0 );
}
