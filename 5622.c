#include <stdio.h>

//���ĺ��� ���ڷ� ��ȯ(�� ���ڿ� +2�� �ؼ� ������ 1 �����µ� 2�ʰɸ��ϱ�)
int ChartoNum(char tok)
{
	switch (tok)
	{
		case 'A':
		case 'B':
		case 'C':
			return 3;
			break;
		case 'D':
		case 'E':
		case 'F':
			return 4;
			break;
		case 'G':
		case 'H':
		case 'I':
			return 5;
			break;
		case 'J':
		case 'K':
		case 'L':
			return 6;
			break;
		case 'M':
		case 'N':
		case 'O':
			return 7;
			break;
		case 'P':
		case 'Q':
		case 'R':
		case 'S':
			return 8;
			break;
		case 'T':
		case 'U':
		case 'V':
			return 9;
			break;
		case 'W':
		case 'X':
		case 'Y':
		case 'Z':
			return 10;
			break;
		default:
			return 0;
			break;

	}
}
int main()
{
	char str[15];
	scanf("%s", str);
	int i;
	int sum_min = 0; 
	int length = strlen(str);
	for (i = 0; i < length; i++)
	{
		sum_min += ChartoNum(str[i]);
	}

	printf("%d", sum_min);

	return 0;
}