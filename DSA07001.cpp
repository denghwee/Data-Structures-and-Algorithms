#include <bits/stdc++.h>
using namespace std;
#define faster(); ios_base::sync_with_stdio(false);cin.tie();cout.tie();
#define matrix vector <vector<long long>>
#define MOD 1000000007
#define el "\n"
#define fi first
#define se second
const long long big = 1e6;

int main() {
	faster();
	stack <long long> st;
    stack <long long> tmp;
	string s = "";
	while ( cin >> s )
	{
		if ( s == "push" )
		{	
			long long x;
			cin >> x;
			st.push(x);
		}
		else if ( s == "pop" )
		{
			if ( !st.empty() ) st.pop();
		}
		else
		{
            if ( !st.empty() )
            {
                while ( !st.empty() )
                {
                    tmp.push(st.top());
                    st.pop();
                }
                while ( !tmp.empty() )
                {
                    st.push(tmp.top());
                    cout << tmp.top() << " ";
                    tmp.pop();
                }
            }
            else
            {
                cout << "empty";
            }
            cout << endl;
		}
	}
} 
