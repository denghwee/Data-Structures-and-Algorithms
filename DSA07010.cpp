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
	int t;
    cin >> t;
    while ( t-- )
    {
        string s;
        cin >> s;
        stack <string> st;
        for (int i = s.size() - 1 ; i >= 0 ; i--)
        {
            if ( s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '%' || s[i] == '^' )
            {
                string fi = st.top();
                st.pop();
                string se = st.top();
                st.pop();
                st.push(fi + se + s[i]);
            }
            else
            {
                st.push(string(1,s[i]));
            }
        }
        cout << st.top();
        if ( t != 0 )
        {
            cout << el;
        }
    }
}
