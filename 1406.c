#include <stdio.h>
#include <string.h>

typedef struct _Stack {
	char arr[100000];
	int index;
}stack;

void stackinit(stack* s) // 스택초기화
{
	s->index = -1;
}

void push(stack* s, char data) // 스택에 push
{
	s->index += 1;
	s->arr[s->index] = data;
}

void pop(stack* s) // pop
{
	s->index -= 1;
}

int empty(stack* s) // 비어져있는지 확인
{
	if (s->index == -1)
	{
		return 1;
	}
	else
		return 0;
}
char top(stack* s)
{
	if (empty(&s))
	{
		return;
	}
	return s->arr[s->index];
}

int main()
{
	stack s1, s2; // s1이 왼쪽 스택 s2가 오른쪽 스택
	stackinit(&s1);
	stackinit(&s2);
	char str[100000]; // 문자열 입력 받는 배열
	gets(str);
	int i,n;
	n = strlen(str);
	for (i = 0;i < n ;i++) // 왼쪽 스택에 문자열을 넣는 과정
	{
		push(&s1, str[i]);
	}
	int M; // 명령 개수
	scanf("%d", &M);
	getchar(); // 공백 처리 위해 getchar

	while (M--)
	{
		char order, a;

		scanf("%c", &order); // 명령 입력 받는 변수 order
		getchar();

		if (order == 'L')
		{
			if (!empty(&s1))
			{
				push(&s2, top(&s1));
				pop(&s1);
			}
		}
		else if (order == 'D')
		{
			if (!empty(&s2))
			{
				push(&s1, top(&s2));
				pop(&s2);
			}
		}
		else if (order == 'B')
		{
			if (!empty(&s1))
			{
				pop(&s1);
			}

		}
		else if (order == 'P')
		{
			scanf("%c", &a);
			getchar();
			push(&s1, a);
		}
	}

	while (!empty(&s1))
	{
		push(&s2, top(&s1));
		pop(&s1);
	}
	while (!empty(&s2))
	{
		printf("%c", top(&s2));
		pop(&s2);
	}

	return 0;
}
