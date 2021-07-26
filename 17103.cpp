#include <iostream>
#include <cstring>

using namespace std;

const int MAX = 100;
int pr;
int prime[MAX];
bool check[MAX + 1];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	// 에라토스테네스 체 알고리즘

	for (int i = 2; i <= MAX; i++)
	{
		if (check[i] == false)
		{
			prime[pr++] = i;
			for (int j = i * 2; j <= MAX; j += i)
			{
				check[j] = true;
			}
		}
	} 

	int T;
	cin >> T;

	// 전체적인 알고리즘은 골드바흐의 추측의 틀에서 조금씩 수정
	while (T--)
	{
		int n;
		cin >> n;

		bool state[MAX+1]; // state 배열 선언 이유 : 두 소수의 순서가 다른 것을 카운팅 제외 하려고
		memset(state, false, MAX + 1); // state 배열을 false로 초기화

		int count = 0; // 파티션 수

		for (int i = 0; i < pr; i++)
		{
			if (n - prime[i] <= 1) // 소수는 2 이상이므로 n - prime[i]가 1 이하이면 조건 벗어남
				break;
			if ((state[prime[i]] == false) && check[n - prime[i]] == false)
			{
				/* 만약 n이 8이고 prime[i]가 3이면 n - prime[i]가 5이므로 조건이 성립하고
				state[3]과 state[5]에 true를 바꿔주면 다음에 prime[i]가 5일때
				state[5]는 true이므로 이 조건문이 실행이 안된다*/

				state[prime[i]] = true; 
				state[n - prime[i]] = true;

				count++;
									
			}
		}
		cout << count << '\n';

	}

	return 0;
}