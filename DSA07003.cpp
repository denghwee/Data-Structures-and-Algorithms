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
    cin.ignore();
    while ( t-- )
    {
        bool check = true;
        string s;
        getline(cin,s);
        stack <char> st;
        for (int i = 0 ; i < s.size() ; i++)
        {
            if ( s[i] == ')' )
            {
                check = true;
                char top = st.top(); st.pop();
                while ( top != '(' )
                {
                    if ( top == '+' || top == '-' || top == '*' || top == '/' || top == '%' || top == '^' )
                    {
                        check = false;
                    }
                    top = st.top(); st.pop();
                }
                if ( check == true )
                {
                    break;
                }
            }
            else
            {
                st.push(s[i]);
            }
        }
        if ( check == true )
        {
            cout << "Yes";
        }
        else
        {
            cout << "No";
        }
        if ( t != 0 )
        {
            cout << el;
        }
    }
}
