#include <stdio.h> //���� 2884 ���� �ð� ����

int main()
{
	int H, M; // H: �� M : ��

	scanf("%d %d", &H, &M);
	
	if (M < 45) //45���� �����ϴµ� 45�� �̸��̶�� H ������ ��ȭ�� ���ܾ� �ϱ⶧��
	{		
		if (H == 0) // H�� 0�̰� M�� 45�� �̸��̸� H�� 23�� �ȴ�
		{
			H = 23;
			int temp;  // �ӽ� ����
			temp = 45 - M; 
			M = 60 - temp;
			printf("%d %d\n", H, M);
		}
		else
		{
			H--; // 1�ð� ����
			int temp; 
			temp = 45 - M;
			M = 60 - temp;
			printf("%d %d\n", H, M);
		}
	}
	else
	{
		M = M - 45;
		printf("%d %d\n", H, M);
	}

	return 0;

}