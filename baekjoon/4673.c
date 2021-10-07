#include <stdio.h>

int d(int n)
{

	int sum = n; // 원래 수 n에서 각 자릿수를 더해야하니까 n값 넣어줌
	int temp = n; // temp 값은 자리수를 더하기 위해 만든 변수
	do // 조건문이 최소 한번은 실행되야함(temp가 한자리수일때 실행이 안되기 때문에)
	{
		sum += (temp % 10); // sum에 temp의 한자릿수를 더함
		temp = temp / 10; // temp를 10으로 나눠 자릿수를 한칸낮춤
	} while (temp);
	
	return sum;
	

}
int main()
{
	int n = 1;
	int arr[10050] = { 0, }; // 충분한 공간 위해
	int i;
	for (i = 1;i <= 10000;i++)
	{
		arr[d(i)] = 1; // 셀프 넘버가 아닌 배열의 인덱스안에 1을 저장
	}
	
	for (i = 1;i <= 10000;i++)
	{
		if (arr[i] == 0) // 값이 0인건 셀프 넘버이기 때문
		{
			printf("%d\n", i);
		}
	}
	return 0;
}
