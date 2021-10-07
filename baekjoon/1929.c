#include <stdio.h>
#include <math.h>

//에라토스테네스의 체 
// 배열의 인덱스를 숫자로 보기 위해 0번째 인덱스를 버림

int main()
{
	int M, N, i,j;
	int arr[1000001];

	scanf("%d %d", &M, &N);

	// 배열 초기화-> 인덱스에 1이 저장되어있으면 소수라는 뜻
	for (i = 1;i <= N;i++)
	{
		arr[i] = 1; 
	}
	// 0번째 인덱스는 버리고 1은 소수가 아니기에 0 할당
	arr[0] = 0;
	arr[1] = 0;

	//에라토스테네스 체 알고리즘 
	for (i = 2; i <= sqrt(N);i++)
	{
		if (arr[i] == 1)
		{
			// i가 소수이면 그 다음 i의 배수부터 0으로 초기화
			for (j = 2 * i;j <= N;j += i)
			{
				arr[j] = 0;
			}
		}
	}


	for (i = M;i <= N;i++)
	{
		if (arr[i] == 1)
		{
			printf("%d\n", i);
		}
	}
}
