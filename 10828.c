#include <stdio.h>
#include <string.h>

typedef struct _Stack
{
	int Data[10000]; // ������ ���� �׸�
	int topindex; // ������ �� �� �����͸� ����Ű�� �ε��� -> -1�̶�� ������ ����ִ°�
}Stack;

//�Լ� ���� ����
void Stackinit(Stack* s);
void push(Stack* s, int num);
void pop(Stack* s);
void size(Stack* s);
int empty(Stack* s);
void top(Stack* s);

int main()
{
	int N; // ��� ���� ���� ����
	Stack s; 
	Stackinit(&s);
	int i;
	scanf("%d", &N);

	char str[10];

	for (i = 0;i < N;i++) {
		scanf("%s", str);		

		if (strcmp(str,"push") == 0) {
			int num;
			scanf("%d", &num);
			push(&s, num);
		}
		else if (strcmp(str, "pop") == 0) {
			pop(&s);
		}
		else if (strcmp(str, "size") == 0) {
			size(&s);
		}
		else if (strcmp(str, "empty") == 0) {
			printf("%d\n",empty(&s));
		}
		else if (strcmp(str, "top") == 0) {
			top(&s);
		}
	}
	
	return 0;
}

void push(Stack *s, int num) // topindex�� 1 �������� �迭�� 0��°�� ����Ű�� �ѵ� ������ push
{
	s->topindex += 1;
	s->Data[s->topindex] = num;
}
void pop(Stack *s) // �� ���� �ִ� �����͸� ���� �� topindex�� -1 ���ҽ�Ų��
{
	if (s->topindex == -1) {
		printf("-1\n");
		return;
	}
	printf("%d\n", s->Data[s->topindex]);
	s->topindex -= 1;
}
void size(Stack *s) // topindex+1�� ��� �� ������ ������ ������
{
	printf("%d\n", s->topindex + 1);
}
int empty(Stack* s) // topindex�� -1�̸� empty ����
{
	if (s->topindex == -1) {
		return 1;
	}
	else {
		return 0;
	}
}
void top(Stack* s) // topindex�� ����Ű�°� top�� �ִ� ������
{ 
	if (empty(s)) {
		printf("-1\n");
		return;
	}
	printf("%d\n", s->Data[s->topindex]);
		
}

void Stackinit(Stack* s) // ���� �ʱ�ȭ topindex�� -1�� �ٲ㼭 ����ִٴ°� ǥ��
{
	s->topindex = -1;
}