#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int GCD(int a, int b)
{
	if (b == 0)
		return a;
	else
		return GCD(b, a % b);
}

int main()
{
	int N, S;
	cin >> N >> S;

	vector<int> v;

	while (N--) // 수빈의 위치 S에서 동생들의 위치 뺀 값의 절대값을 벡터에 담음
	{
		int num;
		cin >> num;
		
		v.push_back(abs(S - num));
	}

	int num = v[0]; // 만약 동생이 한명일 경우 차이를 나타내려고

	if (v.size() != 1) // 동생이 둘 이상인 경우
	{
		for (int i = 0; i < v.size() - 1; i++)
		{
			num = GCD(num, v[i + 1]); // 차례대로 최대공약수 구하기
		}
	}
	
	cout << num;

	return 0;
}