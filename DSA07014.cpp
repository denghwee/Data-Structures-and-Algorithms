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
        stack <long long> st;
        for (int i = s.size() - 1 ; i >= 0 ; i--)
        {
            if ( s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '%' || s[i] == '^' )
            {
                long long num1 = st.top(); st.pop();
                long long num2 = st.top(); st.pop();
                long long res;
                switch (s[i])
                {
                    case '+':
                        res = num1 + num2;
                        break;
                    case '-':
                        res = num1 - num2;
                        break;
                    case '*':
                        res = num1 * num2;
                        break;
                    case '/':
                        res = num1 / num2;
                        break;
                    case '%':
                        res = num1 % num2;
                        break;
                    case '^':
                        res = (int)pow(num1,num2);
                        break;  
                    default:
                        break;
                }
                st.push(res);
            }
            else st.push((long long)(s[i]-'0'));
        }
        cout << st.top();
        if ( t != 0 )
        {
            cout << el;
        }
    }
}
