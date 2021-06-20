#include <stdio.h>
#include <string.h>

typedef struct _Stack
{
	int Data[10000]; // 데이터 담을 그릇
	int topindex; // 스택의 맨 위 데이터를 가리키는 인덱스 -> -1이라면 스택이 비어있는것
}Stack;

//함수 원형 선언
void Stackinit(Stack* s);
void push(Stack* s, char a);
void pop(Stack* s);
int empty(Stack* s);

int main()
{
	int T; // 명령 개수 변수 선언
	Stack s;
	Stackinit(&s);
	int i,j;
	scanf("%d", &T); 
	getchar();

	char str[50]; 

	for (i = 0;i < T;i++) {
		
		gets(str);
		int length = strlen(str); // 괄호 문자열의 길이를 반복문의 조건으로 쓰기 위해
		for(j = 0;j<length;j++)
		{
			if (str[j] == '(') // '('를 만나면 push한다
			{
				push(&s, str[j]);
			}
			else if (str[j] == ')')
			{
				if (empty(&s)) // ')'를 만났을때 스택이 비어져있으면 ')'를 스택에 넣고 반복문 벗어나서 조건문 다시 만남
				{
					push(&s, str[j]);
					break;
				}
				else // 스택이 안비워져있을때 pop해서 정상적인 () 형태를 만듦
				{
					pop(&s);
				}
			}
			
			
		}
		if (empty(&s)) // 마지막 관문에서 이 문자열이 VPS인지 확인
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
		
		Stackinit(&s); // 스택 초기화
	}

	return 0;
}

void push(Stack* s, char a) // topindex를 1 증가시켜 배열의 0번째를 가리키게 한뒤 데이터 push
{
	s->topindex += 1;
	s->Data[s->topindex] = a;
}
void pop(Stack* s) // 맨 위에 있는 데이터를 꺼낸 후 topindex를 -1 감소시킨다
{
	s->topindex -= 1;
}

int empty(Stack* s) // topindex가 -1이면 empty 상태
{
	if (s->topindex == -1) {
		return 1;
	}
	else {
		return 0;
	}
}

void Stackinit(Stack* s) // 스택 초기화 topindex를 -1로 바꿔서 비어있다는걸 표현
{
	s->topindex = -1;
}