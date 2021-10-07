#include <stdio.h>
// 윤년인지 아닌지를 묻는 문제

int main() {

	int year;
	scanf("%d", &year); // 연도 입력

	// 연도가 4의 배수이고 100의 배수이면 안되니까 두 조건을 &&으로 묶어주고 이 두개의 조건 묶음 혹은 400의 배수이면 윤년이다를 || 로 연결해서 조건문 사용
	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) {
		printf("1");
	}
	else
		printf("0");

	return 0;


}
