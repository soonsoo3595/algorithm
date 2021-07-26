#include <iostream>
#include <cstring>

using namespace std;

const int MAX = 100;
int pr;
int prime[MAX];
bool check[MAX + 1];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	// �����佺�׳׽� ü �˰���

	for (int i = 2; i <= MAX; i++)
	{
		if (check[i] == false)
		{
			prime[pr++] = i;
			for (int j = i * 2; j <= MAX; j += i)
			{
				check[j] = true;
			}
		}
	} 

	int T;
	cin >> T;

	// ��ü���� �˰����� �������� ������ Ʋ���� ���ݾ� ����
	while (T--)
	{
		int n;
		cin >> n;

		bool state[MAX+1]; // state �迭 ���� ���� : �� �Ҽ��� ������ �ٸ� ���� ī���� ���� �Ϸ���
		memset(state, false, MAX + 1); // state �迭�� false�� �ʱ�ȭ

		int count = 0; // ��Ƽ�� ��

		for (int i = 0; i < pr; i++)
		{
			if (n - prime[i] <= 1) // �Ҽ��� 2 �̻��̹Ƿ� n - prime[i]�� 1 �����̸� ���� ���
				break;
			if ((state[prime[i]] == false) && check[n - prime[i]] == false)
			{
				/* ���� n�� 8�̰� prime[i]�� 3�̸� n - prime[i]�� 5�̹Ƿ� ������ �����ϰ�
				state[3]�� state[5]�� true�� �ٲ��ָ� ������ prime[i]�� 5�϶�
				state[5]�� true�̹Ƿ� �� ���ǹ��� ������ �ȵȴ�*/

				state[prime[i]] = true; 
				state[n - prime[i]] = true;

				count++;
									
			}
		}
		cout << count << '\n';

	}

	return 0;
}