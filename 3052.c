#include <stdio.h>

int main()
{
	int i, j, A, B;
	int arr1[10], arr2[10];//arr1 배열은 입력하는 숫자배열, arr2배열은 42로 나눈 나머지들의 배열 

	for (i = 0;i < 10;i++) {
		scanf("%d", &arr1[i]); // 숫자 입력
	}

	for (i = 0;i < 10;i++) {
		arr2[i] = arr1[i] % 42 ; // 나머지를 arr2로

	}
	int count = 0; // 서로 다른 나머지의 개수

	for (i = 0; i < 10;i++) 
	{
		count++;
		for (j = i + 1; j < 10; j++)
		{
			
			if (arr2[i] == arr2[j]) // 같은 값의 나머지가 있다면 count에서 1빼준다. 이유 : 티스토리 블로그 
			{
				count--;
				break;
			}
			
		}
	}
	printf("%d\n", count);

	return 0;
}