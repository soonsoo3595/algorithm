#include <stdio.h>

int main()
{
	int N, i,idx;
	int num = 0, max_diff = 0,diff = 0;

	scanf("%d", &N);
	getchar();
	int way[1000]; 

	// �迭�� �����Է¹޴� ���� �̷��� ���� ����ᵵ �迭�� �� ����
	for (i = 0;i < N;i++)
	{
		int data;
		scanf("%d", &data);
		way[i] = data;
	}

	idx = 0;
	//idx�� �� ������ while���� ���� �����ϱ� ���� �ε������� �����Ű�� ����
	for (i = 0;i < N-1;i++)
	{
		//idx�� i�� ��� �����ִ°� �߿�
		idx = i;
		// ���� ������ ���������� ������ 
		while (way[idx] < way[idx + 1])
		{
			num = way[idx + 1] - way[idx];
			diff += num;
			idx++;
		}
		i = idx;
		//�� ���������� ���̰� �� �������� ���̺��� ������ �ִ���� ����
		if (max_diff < diff)
		{
			max_diff = diff;
		}
		//���������� diff 0���� �ʱ�ȭ
		diff = 0;

	}

	printf("%d", max_diff);
	return 0;
}