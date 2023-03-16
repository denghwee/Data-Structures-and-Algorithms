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
        string s;
        cin >> s;
        stack <char> st;
        for (int i = 0 ; i < s.size() ; i++)
        {
            if ( s[i] == '(' || ( s[i] == ')' && st.size() == 0 ) ) st.push(s[i]);
            else if ( s[i] == ')' )
            {
                if ( !st.empty() && st.top() == '(' ) st.pop();
                else st.push(s[i]);
            }
        }
        int num1 = 0, num2 = 0;
        while ( !st.empty() )
        {
            if ( st.top() == '(' ) num1++;
            else num2++;
            st.pop();
        }
        int res = num1/2 + num2/2 + num1%2 + num2%2;
        cout << res;
        if ( t != 0 )
        {
            cout << el;
        }
    }
}
