#include <bits/stdc++.h>
using namespace std;
#define faster(); ios_base::sync_with_stdio(false);cin.tie();cout.tie();
#define matrix vector <vector<long long>>
#define MOD 1000000007
#define el "\n"
const long long big = 1e6;

int n;
vector <long long> a;
vector <long long> x;
matrix ans;
vector <string> ans_string;

void Try(int posa) {
    for (int i = posa + 1 ; i <= n ; i++)
    {
        if ( a[i] > a[posa] )
        {
            x.push_back(a[i]);
            if ( x.size() > 1 )
            {
                ans.push_back(x);
            }
            Try(i);
            x.erase(x.end() - 1, x.end());
        }
    }
}

int main() {
    faster();
    cin >> n;
    a.assign(n+1,0);
    for (int i = 1 ; i <= n ; i++)
    {
        cin >> a[i];
    }
    Try(0);
    for (int i = 0 ; i < ans.size() ; i++)
    {
        string s;
        for (int j = 0 ; j < ans[i].size() ; j++)
        {
            s += to_string(ans[i][j]);
            s += " ";
        }
        ans_string.push_back(s);
    }
    sort(ans_string.begin(),ans_string.end());
    for (int i = 0 ; i < ans_string.size() ; i++)
    {
        cout << ans_string[i] << endl;
    }
}
