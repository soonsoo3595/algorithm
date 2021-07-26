#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
	// Ű ����Ʈ �������� ������ �Ǹ� �ȵȴ� 
	long long N;
	cin >> N;

	vector<int> v;

	if (N == 0) // 0�� �Է����� �� 0 ����ϰ� ����
	{
		cout << '0';
		return 0;
	}

	while (N != 0) // N�� 0�� �Ǹ� ����
	{
		if (N < 0) // N�� ����
		{
			v.push_back(abs(N) % 2); // �켱 ���밪�� �������� ���Ϳ� ���� 
			if (abs(N) % 2 == 1) 
			/* �������� 1�̸� N�� 1�� �� �����ش� ���� -5�� -2�� �����ٰ� �����ϸ� 
			-5 = x * (-2) + D�ε� x�� 2��� D�� -1�� �ż� �������� ������ �ȴ�
			�׷��� x�� 3 D�� 1�� �ùٸ� ���� ��*/ 
				N = abs(N) / 2 + 1;
			else
				N = abs(N) / 2;
		}
		else
		{
			v.push_back(abs(N) % 2);
			N = N / (-2);
		}

	}
	
	while (!v.empty()) // ���Ϳ� �ִ� �� ������ �ϼ�
	{
		cout << v.back();
		v.pop_back();
	}

	return 0;
}