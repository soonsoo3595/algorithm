#include <iostream>

using namespace std;


int main()
{
	int n;
	cin >> n;

	long long d[91][2];
	d[1][0] = 0;
	d[1][1] = 1;

	//���̰� N�̰� ���� 0�� 1�� ������ ���

	for (int i = 2; i <= n; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			if (j == 0)
				d[i][j] = d[i - 1][0] + d[i - 1][1];
			if (j == 1)
				d[i][j] = d[i - 1][0];
		}
	}

	long long ans = 0;

	ans = d[n][0] + d[n][1];

	cout << ans;

	return 0;

}