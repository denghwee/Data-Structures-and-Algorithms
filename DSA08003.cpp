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
    deque <int> st;
    while ( t-- )
    {
        string s;
        cin >> s;
        if ( s == "PUSHFRONT" )
        {
            int x;
            cin >> x;
            st.push_front(x);
        }
        else if ( s == "PRINTFRONT" )
        {
            if ( !st.empty() ) cout << st.front() << el;
            else cout << "NONE" << el;
        }
        else if ( s == "POPFRONT" )
        {
            if ( !st.empty() ) st.pop_front();
        }
        else if ( s == "PUSHBACK" )
        {
            int x;
            cin >> x;
            st.push_back(x);
        }
        else if ( s == "PRINTBACK" )
        {
            if ( !st.empty() ) cout << st.back() << el;
            else cout << "NONE" << el;
        }
        else
        {
            if ( !st.empty() ) st.pop_back();
        }
    }
}
