#include <stdio.h>
#include <string.h>

int main()
{
	char str[1000001];
	int i;

	gets(str);

	int arr[26] = { 0, };
	int length = strlen(str); // strlen�� �ð� ���⵵�� O(N)�̱� ������ for���� ���� �ð��ʰ��� �Ͼ

	// str[i]�� �빮���� ��� �ҹ��ڷ� �ٲ� �� ����ؼ� arr �迭 ���� �ٲ��ش�
	for (i = 0; i < length;i++)
	{
		if (isupper(str[i]))
		{
			arr[tolower(str[i]) - 'a']++;
		}
		else
		{
			arr[str[i] - 'a']++;
		}
	}

	int max = 0; // ���� ���� ���� ���� ���� 
	int maxindex = 0; // ���� ���� ���� ������ ��Ƶ� �ε��� �� ���� maxindex + 'a'�� ���ĺ� ���
	int count = 0; // count�� 1�̸� ���� ���� ���� ���ĺ��� 1���� 2�� �̻��̸� ?�� ����ؾ��Ѵ�	

	//max�� maxindex�� ����
	for (i = 0;i < 26 ;i++) 
	{
		if (max < arr[i])
		{
			max = arr[i];
			maxindex = i;
		}
	}
	// Mississipi �� ��� s�� i�� �Ȱ��� �������Ƿ� count�� 2���ȴ�
	for (i = 0;i < 26;i++)
	{
		if (arr[i] == max)
		{
			count++;
		}
	}

	// �빮�� ��� ���� toupper�� ���
	if (count > 1)
	{
		printf("?\n");
	}
	else
	{
		printf("%c", toupper(maxindex + 'a'));
	}

	return 0;
}