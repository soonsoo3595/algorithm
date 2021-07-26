#include <iostream>
#include <vector>
using namespace std;

int GCD(int a, int b)
{
	if (b == 0)
		return a;
	else
		return GCD(b, a % b);
}

int main()
{
	int T,n;
	vector<int> v; // n이 달라질때마다 배열 길이가 달라져서 벡터 사용

	cin >> T;
	while (T--)
	{
		long long sum = 0; // n = 100이고 모든 수가 100만일때 int 범위 초과해서 long long으로 선언
		cin >> n;
		while (n--)
		{
			int num;
			cin >> num;
			v.push_back(num);
		}
		for (int i = 0; i < v.size(); i++)
		{
			for (int j = i + 1; j < v.size();j++)
			{
				sum += GCD(v[i], v[j]); 
			}
		}
		cout << sum << '\n';
		v.clear(); // 사이클 한번 돌면 벡터 공간 비워주기
	}
	return 0;
}