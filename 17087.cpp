#include <iostream>
#include <vector>
#include <cmath>
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
	int N, S;
	cin >> N >> S;

	vector<int> v;

	while (N--) // ������ ��ġ S���� �������� ��ġ �� ���� ���밪�� ���Ϳ� ����
	{
		int num;
		cin >> num;
		
		v.push_back(abs(S - num));
	}

	int num = v[0]; // ���� ������ �Ѹ��� ��� ���̸� ��Ÿ������

	if (v.size() != 1) // ������ �� �̻��� ���
	{
		for (int i = 0; i < v.size() - 1; i++)
		{
			num = GCD(num, v[i + 1]); // ���ʴ�� �ִ����� ���ϱ�
		}
	}
	
	cout << num;

	return 0;
}