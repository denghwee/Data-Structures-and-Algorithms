#include <bits/stdc++.h>
using namespace std;
#define faster(); ios_base::sync_with_stdio(false);cin.tie();cout.tie();
#define matrix vector <vector<long long>>
#define MOD 1000000007
#define el "\n"
#define fi first
#define se second
const long long big = 1e6;

int selectionSort(vector <long long> a, int n) {
    int MIN, res = 0;
	for (int i = 0 ; i < n - 1 ; i++)
    {
		MIN = i;
		for (int j = i + 1 ; j < n ; j++)
		{
			if ( a[j] < a[MIN] )
			{
				MIN = j;
			}
		}
        if ( MIN != i )
		{
			swap(a[MIN],a[i]);
			res++;
		}
    }
	return res;
}

int main() {
	faster();
	int t;
	cin >> t;
	while ( t-- )
	{
		int n;
		cin >> n;
		vector <long long> a(n);
		for (int i = 0 ; i < n ; i++)
		{
			cin >> a[i];
		}
		cout << selectionSort(a,n);
		if ( t != 0 )
		{
			cout << endl;
		}
	}
}
