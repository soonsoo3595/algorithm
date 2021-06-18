#include <stdio.h>

typedef struct _Stack
{
	char Data[1000]; // 데이터 담을 그릇
	int topindex; // 스택의 맨 위 데이터를 가리키는 인덱스 -> -1이라면 스택이 비어있는것
}Stack;

//함수 원형 선언
void Stackinit(Stack* s);
void push(Stack* s, char a);
void pop(Stack* s);
int empty(Stack* s);

int main()
{
	int T; // 테스트케이스 변수 선언
	Stack s; 
	Stackinit(&s);
	int i;
	scanf("%d", &T);
	getchar();

	char a; 

	for (i = 0; i < T;i++) {
		//do-while문을 쓴 이유는 반복문의 조건이 변수 a가 \n 인 경우인데 dowhile문 이전에 a를 입력받지 않기때문에 처음 무조건 실행시키기 위해서이다.
		do { 
			scanf("%c", &a);
			if (a == ' ')// a가 공백인 경우 스택에 들어있는 문자들을 역순으로 꺼낸 후 공백 입력
			{
				while(!empty(&s))
				pop(&s);
				printf(" ");
			}
			else if (a == '\n') //a가 \n인 경우 스택에 들어있는 문자 역순으로 꺼낸 후 줄 바꿈-> 문장의 마지막이기때문
			{
				while (!empty(&s))
					pop(&s);
				printf("\n");
			}
			else // 위가 아니면 그냥 스택안에 넣기
			{
				push(&s, a);
			}
		}while (a != '\n');

	    	
		
	}
	
	return 0;
}

void push(Stack *s, char a) // topindex를 1 증가시켜 배열의 0번째를 가리키게 한뒤 데이터 push
{
	s->topindex += 1;
	s->Data[s->topindex] = a;
}
void pop(Stack *s) // 맨 위에 있는 데이터를 꺼낸 후 topindex를 -1 감소시킨다
{
	if (s->topindex == -1) {
		printf("-1\n");
		return;
	}
	printf("%c", s->Data[s->topindex]);
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