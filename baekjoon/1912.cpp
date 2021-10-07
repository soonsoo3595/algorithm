#include <iostream>
#include <vector>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	vector<int> a(n);

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	vector<int> d(n);

	d[0] = a[0];

	for (int i = 1; i < n; i++)
	{

		if (d[i-1] + a[i] > a[i])
		{
			d[i] = d[i - 1] + a[i];
		}
		else
		{
			d[i] = a[i];
		}
	}

	int ans = d[0];

	for (int i = 1; i < n; i++)
	{
		if (ans < d[i])
			ans = d[i];
	}

	cout << ans;
}
