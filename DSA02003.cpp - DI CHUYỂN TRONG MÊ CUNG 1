#include <bits/stdc++.h>
using namespace std;
#define faster(); ios_base::sync_with_stdio(false);cin.tie();cout.tie();

long long a[20][20];
int n;
vector <string> ans;

void BackTracking(int i, int j, string res) {
    if ( i == n - 1 && j == n - 1 )
    {
        ans.push_back(res);
        return;
    }
    if ( i < n - 1 && a[i+1][j] == 1 )
    {
        BackTracking(i+1,j,res+"D");
    }
    if ( j < n - 1 && a[i][j+1] == 1 )
    {
        BackTracking(i,j+1,res+"R");
    }
}

int main() {
    faster();
    int t;
    cin >> t;
    while ( t-- )
    {
        cin >> n;
        ans.clear();
        for (int i = 0 ; i < n ; i++)
        {
            for (int j = 0 ; j < n ; j++)
            {
                cin >> a[i][j];
            }
        }
        if ( a[0][0] == 1 )
        {
            BackTracking(0,0,"");
        }
        sort(ans.begin(),ans.end());
        if ( ans.size() == 0 )
        {
            cout << -1;
        }
        else
        {
            for (int i = 0 ; i < ans.size() ; i++)
            {
                cout << ans[i] << " ";
            }
        }
        if ( t != 0 )
        {
            cout << endl;
        }
    }
}
