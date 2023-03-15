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
        bool check = true;
        string s;
        cin >> s;
        stack <char> st;
        for (int i = 0 ; i < s.size() ; i++)
        {
            if ( s[i] == '(' || s[i] == '[' || s[i] == '{' ) st.push(s[i]);
            else if ( !st.empty() )
            {
                if ( s[i] == ')' )
                {
                    if ( st.top() == '(' ) st.pop();
                    else
                    {
                        check = false;
                        break;
                    }
                }
                else if ( s[i] == ']' )
                {
                    if ( st.top() == '[' ) st.pop();
                    else
                    {
                        check = false;
                        break;
                    }
                }
                else
                {
                    if ( st.top() == '{' ) st.pop();
                    else
                    {
                        check = false;
                        break;
                    }
                }
            }
            else
            {
                check = false;
                break;
            }
        }
        if ( check == true ) cout << "YES";
        else cout << "NO";
        if ( t != 0 )
        {
            cout << el;
        }
    }
}
