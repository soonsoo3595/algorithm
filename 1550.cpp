#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string n; // �ִ� ���̰� 6�� 16���� ���ڿ� �Է�
	cin >> n;

	int i,sum = 0;
	int len = n.size();

	
	for (i = 0; i < len; i++)
	{
		if (isdigit(n[i])) // ���ڶ�� n[i] - '0'�� ���༭ ���� ���ڷ� ����
		{
			sum = (n[i] - '0') * pow(16,(len-1)-i) + sum;
		}
		else // 'A'~'F'�� �ƽ�Ű ������ 55�� ���ָ� 10~15������ ���´�
		{
			sum = (n[i] - 55) * pow(16, (len-1) - i) + sum;
		}
	}
	
	cout << sum;

	return 0;
}