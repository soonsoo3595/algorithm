#include <stdio.h>

int main()
{
	int i, j, A, B;
	int arr1[10], arr2[10];//arr1 �迭�� �Է��ϴ� ���ڹ迭, arr2�迭�� 42�� ���� ���������� �迭 

	for (i = 0;i < 10;i++) {
		scanf("%d", &arr1[i]); // ���� �Է�
	}

	for (i = 0;i < 10;i++) {
		arr2[i] = arr1[i] % 42 ; // �������� arr2��

	}
	int count = 0; // ���� �ٸ� �������� ����

	for (i = 0; i < 10;i++) 
	{
		count++;
		for (j = i + 1; j < 10; j++)
		{
			
			if (arr2[i] == arr2[j]) // ���� ���� �������� �ִٸ� count���� 1���ش�. ���� : Ƽ���丮 ��α� 
			{
				count--;
				break;
			}
			
		}
	}
	printf("%d\n", count);

	return 0;
}