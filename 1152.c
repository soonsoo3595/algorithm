#include <stdio.h>
#include <string.h>

// ������ �������� �ܾ �������ϱ� ���ڿ��� ���� ������ ������ �˸� �ܾ� ������ �˼��ִ�
int main()
{
	char str[1000];
	gets(str);
	
	int i;
	int count = 0; // ���� ������ ��
	int length = strlen(str);

	// ������ ������ count 1�� ����
	for (i = 0; i < length;i++)
	{
		if (str[i] == ' ' )
		{
			count++;
		}		
	}
	// ���� ó���� ���� �����̶�� �ܾ� ���� �������������ϱ� count�� �������ظ�ŭ ���ش�
	if (str[0] == ' ')
	{
		count--;
	}
	if (str[length - 1] == ' ')
	{
		count--;
	}

	printf("%d", count + 1);

	return 0;
}