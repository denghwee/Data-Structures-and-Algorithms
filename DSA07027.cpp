//I'm HuyNho or you can call me DengHwee
#include <bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie();cout.tie();
#define matrix vector <vector<long long>>
#define MOD 1000000007
#define el "\n"
#define fi first
#define se second
const long long big = 1e6;

int main() {
    faster();
    int t;
    cin >> t;
    while ( t-- )
    {
        long long n;
        cin >> n;
        vector <long long> a(n), res(n);
        stack <int> st;
        for (int i = 0 ; i < n ; i++)
        {
            cin >> a[i];
        }
        for (int i = n - 1 ; i >= 0 ; i--)
        {
            while ( !st.empty() && st.top() <= a[i] ) st.pop();
            res[i] = st.empty() ? -1 : st.top();
            st.push(a[i]);
        }
        for (int i = 0 ; i < n ; i++)
        {
            cout << res[i] << " ";
        }
        if ( t != 0 )
        {
            cout << el;
        }
    }
}
