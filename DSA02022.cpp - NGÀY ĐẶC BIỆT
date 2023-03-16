#include <bits/stdc++.h>
using namespace std;
#define faster(); ios_base::sync_with_stdio(false);cin.tie();cout.tie();
#define matrix vector <vector<long long>>
#define MOD 1000000007
#define el "\n"
const long long big = 1e6;

vector <string> ans;

void initiate(string &s) {
    for (int i = 0 ; i < 8 ; i++)
    {
        s += "0";
    }
}

int bit_Gen(string &s) {
    int i = 7;
    while ( i >= 0 && s[i] == '2' )
    {
        s[i] = '0';
        i--;
    }
    if ( i == -1 ) return 1;
    else
    {
        s[i] = '2';
        return 0;
    }
}

void cmp(string s) {
    if ( s[2] == '2' )
        return;
    if ( (s[0] == '0' && s[1] == '0') || (s[2] == '0' && s[3] == '0') || (s[4] == '0' && s[5] == '0' && s[6] == '0' && s[7] == '0') )
        return;
    if ( s[4] == '0' )
        return;

    ans.push_back(s);
}

int main() {
    faster();
    int t = 1;
    // cin >> t;
    while ( t-- )
    {
        string s = "";
        initiate(s);
        int check;
        do
        {
            cmp(s);
            check = bit_Gen(s);
        }
        while ( check == 0 );
        sort(ans.begin(),ans.end());
        for (int i = 0 ; i < ans.size() ; i++)
        {
            cout << ans[i][0] << ans[i][1] << "/" << ans[i][2] << ans[i][3] << "/" << ans[i][4] << ans[i][5] << ans[i][6] << ans[i][7] << endl;
        }
        if ( t != 0 )
        {
            cout << endl;
        }
    }
}
