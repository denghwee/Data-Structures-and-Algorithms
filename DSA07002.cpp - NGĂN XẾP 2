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
    int t;
    cin >> t;
	while ( t-- )
	{
        cin >> s;
		if ( s == "PUSH" )
		{	
			long long x;
			cin >> x;
			st.push(x);
		}
		else if ( s == "POP" )
		{
			if ( !st.empty() ) st.pop();
		}
		else
		{
            if ( !st.empty() )
            {
                cout << st.top();
            }
            else
            {
                cout << "NONE";
            }
            if ( t != 0 )
            {
                cout << endl;
            }
		}
	}
} 
