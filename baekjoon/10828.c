#include <stdio.h>
#include <string.h>

typedef struct _Stack
{
	int Data[10000]; // 데이터 담을 그릇
	int topindex; // 스택의 맨 위 데이터를 가리키는 인덱스 -> -1이라면 스택이 비어있는것
}Stack;

//함수 원형 선언
void Stackinit(Stack* s);
void push(Stack* s, int num);
void pop(Stack* s);
void size(Stack* s);
int empty(Stack* s);
void top(Stack* s);

int main()
{
	int N; // 명령 개수 변수 선언
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

void push(Stack *s, int num) // topindex를 1 증가시켜 배열의 0번째를 가리키게 한뒤 데이터 push
{
	s->topindex += 1;
	s->Data[s->topindex] = num;
}
void pop(Stack *s) // 맨 위에 있는 데이터를 꺼낸 후 topindex를 -1 감소시킨다
{
	if (s->topindex == -1) {
		printf("-1\n");
		return;
	}
	printf("%d\n", s->Data[s->topindex]);
	s->topindex -= 1;
}
void size(Stack *s) // topindex+1이 사실 상 스택의 데이터 개수임
{
	printf("%d\n", s->topindex + 1);
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
void top(Stack* s) // topindex가 가리키는게 top에 있는 데이터
{ 
	if (empty(s)) {
		printf("-1\n");
		return;
	}
	printf("%d\n", s->Data[s->topindex]);
		
}

void Stackinit(Stack* s) // 스택 초기화 topindex를 -1로 바꿔서 비어있다는걸 표현
{
	s->topindex = -1;
}
