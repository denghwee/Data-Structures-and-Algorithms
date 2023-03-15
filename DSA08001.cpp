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
        int n, selection;
        cin >> n;
        queue <int> st;
        while ( n-- )
        {
            cin >> selection;
            switch (selection)
            {
                case 1:
                    cout << st.size() << el;
                    break;
                case 2:
                    if ( !st.empty() ) cout << "NO";
                    else cout << "YES";
                    cout << el;
                    break;
                case 3:
                    int x;
                    cin >> x;
                    st.push(x);
                    break;
                case 4:
                    if ( !st.empty() ) st.pop();
                    break;
                case 5:
                    if ( !st.empty() ) cout << st.front();
                    else cout << -1;
                    cout << el;
                    break;
                case 6:
                    if ( !st.empty() ) cout << st.back();
                    else cout << -1;
                    cout << el;
                    break;
            }
        }
    }
}
