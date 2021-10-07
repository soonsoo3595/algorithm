#include <stdio.h>

int main()
{
	char arr[100];
	gets(arr);
	int i;
	int count = 0;
	int length = strlen(arr);

	for (i = 0;i < length;i++)
	{
		char tok = arr[i];
		switch (tok)
		{

			case 'c':
				if (arr[i + 1] == '=' || arr[i + 1] == '-')
				{
					count++;
					i += 1;
				}
				else
				{
					count++;
				}
				break;
			case 'd':
				if (arr[i + 1] == '-')
				{
					count++;
					i += 1;
				}
				else if((arr[i + 1] == 'z') && (arr[i + 2] == '='))
				{
					count++;
					i += 2;
				}
				else
				{
					count++;
				}
				break;
			case 'l':
				if (arr[i + 1] == 'j')
				{
					count++;
					i += 1;
				}
				else
				{
					count++;
				}
				break;
			case 'n':
				if (arr[i + 1] == 'j')
				{
					count++;
					i += 1;
				}
				else
				{
					count++;
				}
				break;
			case 's':
				if (arr[i + 1] == '=')
				{
					count++;
					i += 1;
				}
				else
				{
					count++;
				}
				break;
			case 'z':
				if (arr[i + 1] == '=')
				{
					count++;
					i += 1;
				}
				else
				{
					count++;
				}
				break;
			default :
				count++;
				break;

		}
	}

	printf("%d", count);

	return 0;
}
