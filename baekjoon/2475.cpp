#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int num[5];
	int answer;

	for (int i = 0; i < 5; i++)
	{
		cin >> num[i];
	}

	int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		sum += pow(num[i], 2);
	}

	answer = sum % 10;

	cout << answer;

	return 0;
}