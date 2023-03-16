#include <bits/stdc++.h>
using namespace std;
#define faster(); ios_base::sync_with_stdio(false);cin.tie();cout.tie();
#define matrix vector <vector<long long>>
#define MOD 1000000007
#define el "\n"
const long long big = 1e6;

int main() {
    faster();
    int t;
	cin >> t;
	while ( t-- )
	{
		long long n, res = 0;
		cin >> n;
		priority_queue <long long, vector<long long>, greater<long long>> pq;
		long long x;
		for (int i = 0 ; i < n ; i++)
		{
			cin >> x;
			pq.push(x);
		}
		long long tmp1, tmp2;
		while ( pq.size() > 1 )
		{
			tmp1 = pq.top();
			pq.pop();
			tmp2 = pq.top();
			pq.pop();
			pq.push(tmp1+tmp2);
			res += (tmp1+tmp2);
		}
		cout << res;
		if ( t != 0 )
		{
			cout << endl;
		}
	}
}
