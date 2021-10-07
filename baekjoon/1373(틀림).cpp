#include <iostream>
#include <cstring>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string b_num; // 이진수를 입력받을 string 객체 b_num
	cin >> b_num;
	int decimal = 0; // 이진수를 십진수로 변환한 결과를 담을 변수
	int length = b_num.size();
	int num = pow(2, length - 1); // 이진수를 변환하기 위한 도구

	
	for (int i = 0; i < length; i++)
	{
		if (b_num[i] == '1') // 1이면 그에 맞는 2의 거듭제곱을 곱해준다
		{
			decimal += num;
		}
		num = num / 2;
	}

	vector<int> v; // 십진수를 팔진법으로 담을 공간
	
	if (decimal == 0) // 이 코드가 없을시 만약 십진수가 0이면 0이 표현이 안된다
	{
		v.push_back(0);
	}
	else
	{
		while (decimal != 0)
		{
			v.push_back(decimal % 8);
			decimal /= 8;
		}
	}
	while (!v.empty())
	{
		cout << v.back();
		v.pop_back();
	}

	return 0;
}
