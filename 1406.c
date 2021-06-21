#include <stdio.h>
#include <string.h>

typedef struct _Stack {
	char arr[100000];
	int index;
}stack;

void stackinit(stack* s)
{
	s->index = -1;
}

void push(stack* s, char data)
{
	s->index += 1;
	s->arr[s->index] = data;
}

char pop(stack* s)
{
	char temp = s->arr[s->index];
	s->index -= 1;
	return temp;

}

int empty(stack* s)
{
	if (s->index == -1)
	{
		return 1;
	}
	else
		return 0;
}

int main()
{
	stack s1, s2;
	stackinit(&s1);
	stackinit(&s2);
	char str[100000];
	scanf("%s", str);
	getchar();
	int i,n;
	n = strlen(str);
	for (i = 0;i < n ;i++)
	{
		push(&s1, str[i]);
	}
	int M;
	scanf("%d", &M);
	getchar();

	while (M--)
	{
		char order, a;

		scanf("%c", &order);
		getchar();
		if (order == 'L')
		{
			if (empty(&s1))
			{
				continue;
			}
			a = pop(&s1);
			push(&s2, a);
		}
		else if (order == 'D')
		{
			if (empty(&s2))
			{
				continue;
			}
			a = pop(&s2);
			push(&s1, a);
		}
		else if (order == 'B')
		{
			if (empty(&s1))
			{
				continue;
			}
			pop(&s1);

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
		push(&s2, pop(&s1));
	}
	while (!empty(&s2))
	{
		printf("%c", pop(&s2));
	}

	return 0;
}