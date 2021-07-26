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
	vector<int> v; // n�� �޶��������� �迭 ���̰� �޶����� ���� ���

	cin >> T;
	while (T--)
	{
		long long sum = 0; // n = 100�̰� ��� ���� 100���϶� int ���� �ʰ��ؼ� long long���� ����
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
		v.clear(); // ����Ŭ �ѹ� ���� ���� ���� ����ֱ�
	}
	return 0;
}