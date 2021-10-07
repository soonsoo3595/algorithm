#include <stdio.h>
#include <string.h>

int main()
{
	char str[1000001];
	int i;

	gets(str);

	int arr[26] = { 0, };
	int length = strlen(str); // strlen은 시간 복잡도가 O(N)이기 때문에 for문에 쓰면 시간초과가 일어남

	// str[i]가 대문자일 경우 소문자로 바꾼 후 계산해서 arr 배열 값을 바꿔준다
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

	int max = 0; // 가장 많이 쓰인 개수 저장 
	int maxindex = 0; // 가장 많이 쓰인 개수를 담아둔 인덱스 값 저장 maxindex + 'a'는 알파벳 출력
	int count = 0; // count가 1이면 가장 많이 쓰인 알파벳이 1개고 2개 이상이면 ?를 출력해야한다	

	//max와 maxindex값 저장
	for (i = 0;i < 26 ;i++) 
	{
		if (max < arr[i])
		{
			max = arr[i];
			maxindex = i;
		}
	}
	// Mississipi 의 경우 s와 i가 똑같이 쓰였으므로 count가 2가된다
	for (i = 0;i < 26;i++)
	{
		if (arr[i] == max)
		{
			count++;
		}
	}

	// 대문자 출력 위해 toupper를 사용
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
