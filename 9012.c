#include <stdio.h>
#include <string.h>

typedef struct _Stack
{
	int Data[10000]; // ������ ���� �׸�
	int topindex; // ������ �� �� �����͸� ����Ű�� �ε��� -> -1�̶�� ������ ����ִ°�
}Stack;

//�Լ� ���� ����
void Stackinit(Stack* s);
void push(Stack* s, char a);
void pop(Stack* s);
int empty(Stack* s);

int main()
{
	int T; // ��� ���� ���� ����
	Stack s;
	Stackinit(&s);
	int i,j;
	scanf("%d", &T); 
	getchar();

	char str[50]; 

	for (i = 0;i < T;i++) {
		
		gets(str);
		int length = strlen(str); // ��ȣ ���ڿ��� ���̸� �ݺ����� �������� ���� ����
		for(j = 0;j<length;j++)
		{
			if (str[j] == '(') // '('�� ������ push�Ѵ�
			{
				push(&s, str[j]);
			}
			else if (str[j] == ')')
			{
				if (empty(&s)) // ')'�� �������� ������ ����������� ')'�� ���ÿ� �ְ� �ݺ��� ����� ���ǹ� �ٽ� ����
				{
					push(&s, str[j]);
					break;
				}
				else // ������ �Ⱥ���������� pop�ؼ� �������� () ���¸� ����
				{
					pop(&s);
				}
			}
			
			
		}
		if (empty(&s)) // ������ �������� �� ���ڿ��� VPS���� Ȯ��
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
		
		Stackinit(&s); // ���� �ʱ�ȭ
	}

	return 0;
}

void push(Stack* s, char a) // topindex�� 1 �������� �迭�� 0��°�� ����Ű�� �ѵ� ������ push
{
	s->topindex += 1;
	s->Data[s->topindex] = a;
}
void pop(Stack* s) // �� ���� �ִ� �����͸� ���� �� topindex�� -1 ���ҽ�Ų��
{
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