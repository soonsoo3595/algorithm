#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
	string str;
	getline(cin, str);
	str += '\n'; // �����ڰ� '\n'�϶� ���ÿ� �ִ��͵� ������ؼ�

	int length = str.size();

	stack<char> s;

	for (int i = 0; i < length; i++)
	{
		char tok = str[i];
		int idx;

		if (tok == '<') // �±��� ������ ������
		{
			if (!s.empty()) // �±׸� �����µ� ���� ���þȿ� �����Ͱ� ������ �װͺ��� �� ����
			{
				while (!s.empty())
				{
					cout << s.top();
					s.pop();
				}
			}
			idx = i; // i�� ������ �ε��� ���� '>'�� ���������� ����ϱ� ���� ����
			while (str[idx] != '>') // '>'�� ���������� �ݺ��� ����
			{
				cout << str[idx++];
			}
			cout << str[idx]; //'>' ���
			i = idx; // i�� �ݺ��� ���� �ε��� �� ��ȯ
		}
		else if (tok == ' ' || tok == '\n') // �����̳� �� ���ڸ� ������ ���ÿ��� ������
		{
			if (!s.empty())
			{
				while (!s.empty())
				{
					cout << s.top();
					s.pop();
				}
			}
			cout << ' ';
		}
		else
		{
			s.push(tok); //�׳� �ܾ�� ���ÿ� push
		}
	}
}