#include <stdio.h>
#include <string.h>

// 공백을 기준으로 단어가 나눠지니까 문자열에 쓰인 공백의 개수를 알면 단어 개수를 알수있다
int main()
{
	char str[1000];
	gets(str);
	
	int i;
	int count = 0; // 공백 개수를 셈
	int length = strlen(str);

	// 공백을 만나면 count 1씩 증가
	for (i = 0; i < length;i++)
	{
		if (str[i] == ' ' )
		{
			count++;
		}		
	}
	// 만약 처음과 끝이 공백이라면 단어 수는 증가하지않으니까 count를 증가해준만큼 빼준다
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