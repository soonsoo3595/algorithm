#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string n; // 최대 길이가 6인 16진수 문자열 입력
	cin >> n;

	int i,sum = 0;
	int len = n.size();

	
	for (i = 0; i < len; i++)
	{
		if (isdigit(n[i])) // 숫자라면 n[i] - '0'을 해줘서 실제 숫자로 변경
		{
			sum = (n[i] - '0') * pow(16,(len-1)-i) + sum;
		}
		else // 'A'~'F'의 아스키 값에서 55를 빼주면 10~15까지가 나온다
		{
			sum = (n[i] - 55) * pow(16, (len-1) - i) + sum;
		}
	}
	
	cout << sum;

	return 0;
}