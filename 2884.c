#include <stdio.h> //백준 2884 문제 시간 빼기

int main()
{
	int H, M; // H: 시 M : 분

	scanf("%d %d", &H, &M);
	
	if (M < 45) //45분을 빼야하는데 45분 미만이라면 H 변수에 변화가 생겨야 하기때문
	{		
		if (H == 0) // H가 0이고 M이 45분 미만이면 H가 23이 된다
		{
			H = 23;
			int temp;  // 임시 변수
			temp = 45 - M; 
			M = 60 - temp;
			printf("%d %d\n", H, M);
		}
		else
		{
			H--; // 1시간 감소
			int temp; 
			temp = 45 - M;
			M = 60 - temp;
			printf("%d %d\n", H, M);
		}
	}
	else
	{
		M = M - 45;
		printf("%d %d\n", H, M);
	}

	return 0;

}