#include <stdio.h>

typedef struct _Stack
{
	char Data[1000]; // ������ ���� �׸�
	int topindex; // ������ �� �� �����͸� ����Ű�� �ε��� -> -1�̶�� ������ ����ִ°�
}Stack;

//�Լ� ���� ����
void Stackinit(Stack* s);
void push(Stack* s, char a);
void pop(Stack* s);
int empty(Stack* s);

int main()
{
	int T; // �׽�Ʈ���̽� ���� ����
	Stack s; 
	Stackinit(&s);
	int i;
	scanf("%d", &T);
	getchar();

	char a; 

	for (i = 0; i < T;i++) {
		//do-while���� �� ������ �ݺ����� ������ ���� a�� \n �� ����ε� dowhile�� ������ a�� �Է¹��� �ʱ⶧���� ó�� ������ �����Ű�� ���ؼ��̴�.
		do { 
			scanf("%c", &a);
			if (a == ' ')// a�� ������ ��� ���ÿ� ����ִ� ���ڵ��� �������� ���� �� ���� �Է�
			{
				while(!empty(&s))
				pop(&s);
				printf(" ");
			}
			else if (a == '\n') //a�� \n�� ��� ���ÿ� ����ִ� ���� �������� ���� �� �� �ٲ�-> ������ �������̱⶧��
			{
				while (!empty(&s))
					pop(&s);
				printf("\n");
			}
			else // ���� �ƴϸ� �׳� ���þȿ� �ֱ�
			{
				push(&s, a);
			}
		}while (a != '\n');

	    	
		
	}
	
	return 0;
}

void push(Stack *s, char a) // topindex�� 1 �������� �迭�� 0��°�� ����Ű�� �ѵ� ������ push
{
	s->topindex += 1;
	s->Data[s->topindex] = a;
}
void pop(Stack *s) // �� ���� �ִ� �����͸� ���� �� topindex�� -1 ���ҽ�Ų��
{
	if (s->topindex == -1) {
		printf("-1\n");
		return;
	}
	printf("%c", s->Data[s->topindex]);
	s->topindex -= 1;
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

void Stackinit(Stack* s) // ���� �ʱ�ȭ topindex�� -1�� �ٲ㼭 ����ִٴ°� ǥ��
{
	s->topindex = -1;
}