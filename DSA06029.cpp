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
	int n;
	cin >> n;
	vector <long long> a(n);
	matrix ans;
	for (int i = 0 ; i < n ; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; i++)
    {
        int key = a[i];
        int j = i - 1;
        while ( j >= 0 && a[j] > key )
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
		ans.push_back(a);
    }
	for (int i = ans.size() - 1 ; i >= 0 ; i--)
	{
		cout << "Buoc " << i << ": ";
		for (int j = 0 ; j < n ; j++)
		{
			cout << ans[i][j] << " ";
		}
		n--;
		cout << endl;
	}
}
