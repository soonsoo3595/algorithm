#include <iostream>

using namespace std;

int d[1001][10]; // 길이가 n이고 끝자리가 i(0 <= i && i < 10) 인 경우의 수

int main()
{
	int n;
	cin >> n;

	// 길이가 1일때는 방법이 1가지 밖에 없다

	for (int i = 0; i < 10; i++)
	{
		d[1][i] = 1;
	}

	for (int i = 2; i <= n; i++)
	{
		for (int j = 0; j <= 9; j++)
		{
			for (int k = 0; k <= j; k++)
			{
				d[i][j] += d[i-1][k];
			}
			d[i][j] %= 10007;
		}
		
	}

	int ans = 0;

	for (int i = 0; i < 10; i++)
	{
		ans += d[n][i];
	}

	cout << ans % 10007;
	return 0;
}