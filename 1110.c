#include <stdio.h>

int main()
{
    int N, new, test, fir, sec, cycle = 0;
    scanf("%d", &N); // N 변수 입력
    test = N; 

    while (1)
    {

        fir = test / 10; 
        sec = test % 10;
        new = sec * 10 + ((fir + sec) % 10);
        //새로운 수는 그 전 수의 일의 자리가 십의 자리로 십의자리 + 일의자리가 일의자리로 이동해서 만들어짐
        test = new; 
        cycle++;// while문이 한번돌때마다 cycle 1씩 증가
        if (test == N) // 매번 바뀌는 수가 처음 수와 같은지 확인
        {
            printf("%d\n", cycle);
            break;
        }
    }
}