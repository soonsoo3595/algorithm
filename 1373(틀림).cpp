#include <iostream>
#include <cstring>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string b_num; // �������� �Է¹��� string ��ü b_num
	cin >> b_num;
	int decimal = 0; // �������� �������� ��ȯ�� ����� ���� ����
	int length = b_num.size();
	int num = pow(2, length - 1); // �������� ��ȯ�ϱ� ���� ����

	
	for (int i = 0; i < length; i++)
	{
		if (b_num[i] == '1') // 1�̸� �׿� �´� 2�� �ŵ������� �����ش�
		{
			decimal += num;
		}
		num = num / 2;
	}

	vector<int> v; // �������� ���������� ���� ����
	
	if (decimal == 0) // �� �ڵ尡 ������ ���� �������� 0�̸� 0�� ǥ���� �ȵȴ�
	{
		v.push_back(0);
	}
	else
	{
		while (decimal != 0)
		{
			v.push_back(decimal % 8);
			decimal /= 8;
		}
	}
	while (!v.empty())
	{
		cout << v.back();
		v.pop_back();
	}

	return 0;
}