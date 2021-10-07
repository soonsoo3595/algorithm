#include <stdio.h>

int main()
{
	int N, i,idx;
	int num = 0, max_diff = 0,diff = 0;

	scanf("%d", &N);
	getchar();
	int way[1000]; 

	// 배열에 정수입력받는 과정 이렇게 쓰면 띄워써도 배열에 잘 들어간다
	for (i = 0;i < N;i++)
	{
		int data;
		scanf("%d", &data);
		way[i] = data;
	}

	idx = 0;
	//idx를 쓴 이유는 while문을 쓸때 이해하기 쉽게 인덱스값을 변경시키기 위해
	for (i = 0;i < N-1;i++)
	{
		//idx와 i를 계속 맞춰주는게 중요
		idx = i;
		// 값이 같으면 오르막길은 끝난다 
		while (way[idx] < way[idx + 1])
		{
			num = way[idx + 1] - way[idx];
			diff += num;
			idx++;
		}
		i = idx;
		//현 오르막길의 높이가 전 오르막길 높이보다 높으면 최대높이 갱신
		if (max_diff < diff)
		{
			max_diff = diff;
		}
		//끝날때마다 diff 0으로 초기화
		diff = 0;

	}

	printf("%d", max_diff);
	return 0;
}
