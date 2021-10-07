#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
	// 키 포인트 나머지가 음수가 되면 안된다 
	long long N;
	cin >> N;

	vector<int> v;

	if (N == 0) // 0을 입력했을 시 0 출력하고 종료
	{
		cout << '0';
		return 0;
	}

	while (N != 0) // N이 0이 되면 종료
	{
		if (N < 0) // N이 음수
		{
			v.push_back(abs(N) % 2); // 우선 절대값의 나머지를 벡터에 저장 
			if (abs(N) % 2 == 1) 
			/* 나머지가 1이면 N에 1을 더 더해준다 만약 -5를 -2로 나눈다고 생각하면 
			-5 = x * (-2) + D인데 x가 2라면 D는 -1이 돼서 나머지가 음수가 된다
			그래서 x가 3 D가 1이 올바른 식이 됨*/ 
				N = abs(N) / 2 + 1;
			else
				N = abs(N) / 2;
		}
		else
		{
			v.push_back(abs(N) % 2);
			N = N / (-2);
		}

	}
	
	while (!v.empty()) // 벡터에 있는 값 꺼내면 완성
	{
		cout << v.back();
		v.pop_back();
	}

	return 0;
}
