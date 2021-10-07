#include <stdio.h>
#include <string.h>

typedef struct _que {
	int data[10001];
	int begin;
	int end;
}Que;

void Qinit(Que* q);
void push(Que* q, int data);
void pop(Que* q);
void size(Que* q);
void empty(Que* q);
void front(Que* q);
void back(Que* q);

int main()
{
	Que q;
	Qinit(&q);
	int N;
	scanf("%d", &N);
	getchar();
	
	while (N--)
	{
		char order[10];
		scanf("%s", order);
		getchar();

		if (strcmp(order,"push")==0)
		{
			int a;
			scanf("%d", &a);
			getchar();
			push(&q, a);
		}
		else if (strcmp(order, "pop") == 0)
		{
			pop(&q);
		}
		else if (strcmp(order, "size") == 0)
		{
			size(&q);
		}
		else if (strcmp(order, "empty") == 0)
		{
			empty(&q);
		}
		else if (strcmp(order, "front") == 0)
		{
			front(&q);
		}
		else if (strcmp(order, "back") == 0)
		{
			back(&q);
		}
	}
}

void Qinit(Que* q)
{
	q->begin = 0;
	q->end = 0;
}
void push(Que* q, int data)
{
	q->data[q->end] = data;
	q->end += 1;

}
void pop(Que* q)
{
	if ((q->begin) == (q->end))
	{
		printf("-1\n");
	}
	else
	{
		printf("%d\n", q->data[q->begin]);
		q->begin += 1;
	}
}
void size(Que* q)
{
	printf("%d\n", (q->end) - (q->begin));
}
void empty(Que* q)
{
	if ((q->begin) == (q->end))
	{
		printf("1\n");
	}
	else
	{
		printf("0\n");
	}
}
void front(Que* q)
{
	if ((q->begin) == (q->end))
	{
		printf("-1\n");
	}
	else
	{
		printf("%d\n", q->data[q->begin]);
	}
}
void back(Que* q)
{
	if ((q->begin) == (q->end))
	{
		printf("-1\n");
	}
	else
	{
		printf("%d\n", q->data[(q->end)-1]);
	}
}
