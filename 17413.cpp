#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
	string str;
	getline(cin, str);
	str += '\n'; // 끝문자가 '\n'일때 스택에 있던것들 빼줘야해서

	int length = str.size();

	stack<char> s;

	for (int i = 0; i < length; i++)
	{
		char tok = str[i];
		int idx;

		if (tok == '<') // 태그의 시작을 만난다
		{
			if (!s.empty()) // 태그를 만났는데 만약 스택안에 데이터가 있으면 그것부터 다 뺀다
			{
				while (!s.empty())
				{
					cout << s.top();
					s.pop();
				}
			}
			idx = i; // i와 별개의 인덱스 변수 '>'를 만날때까지 출력하기 위한 변수
			while (str[idx] != '>') // '>'를 만날때까지 반복문 실행
			{
				cout << str[idx++];
			}
			cout << str[idx]; //'>' 출력
			i = idx; // i에 반복문 후의 인덱스 값 반환
		}
		else if (tok == ' ' || tok == '\n') // 공백이나 끝 문자를 만나면 스택에서 꺼내기
		{
			if (!s.empty())
			{
				while (!s.empty())
				{
					cout << s.top();
					s.pop();
				}
			}
			cout << ' ';
		}
		else
		{
			s.push(tok); //그냥 단어면 스택에 push
		}
	}
}