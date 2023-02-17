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
	int n, tt = 0;
	cin >> n;
	vector <long long> a(n);
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
		cout << "Buoc " << tt++ << ": ";
		for (int h = 0 ; h <= i ; h++)
		{
			cout << a[h] << " ";
		}
		cout << endl;
    }
}
