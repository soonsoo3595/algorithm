#include <stdio.h>

typedef struct _stack {
	int arr[100000];
	int numofdata;
	int cur;
}stack;

void Sinit(stack* s)
{
	s->numofdata = 0;
	s->cur = -1;
}

void push(stack* s, int data)
{
	s->cur++;
	s->arr[s->cur] = data;
	s->numofdata++;
}

int pop(stack* s)
{
	int rdata = s->arr[s->cur];
	s->cur--;
	s->numofdata--;

	return rdata;
}
int empty(stack* s)
{
	if (s->cur == -1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int K,i;
	scanf("%d", &K);
	getchar();
	stack s;
	Sinit(&s);

	for (i = 0;i < K;i++)
	{
		int num;
		scanf("%d", &num);
		getchar();
		if (num == 0)
		{
			pop(&s);
		}
		else
		{
			push(&s, num);
		}
	}
	int sum = 0;
	while (!empty(&s))
	{
		sum += pop(&s);
	}

	printf("%d", sum);

	return 0;
}