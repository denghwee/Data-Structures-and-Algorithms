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
    int t;
    cin >> t;
    while ( t-- )
    {
        int n, res = 0;
        cin >> n;
        vector <long long> a(n);
        deque <int> dq;
        for (int i = 0 ; i < n ; i++)
        {
            cin >> a[i];
            dq.push_front(a[i]);
        }
        sort(a.begin(),a.end());
        while ( a[n-1] != dq.front() )
        {
            dq.push_front(dq.back());
            dq.pop_back();
            res++;
        }
        cout << res;
        if ( t != 0 )
        {
            cout << el;
        }
    }
}
