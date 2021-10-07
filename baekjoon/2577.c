#include <stdio.h>

int main()
{
    int A, B, C;
    scanf("%d", &A);
    getchar(); // 앞에서 엔터를 쳐서 버퍼를 비워주는 과정
    scanf("%d", &B);
    getchar();
    scanf("%d", &C);
    getchar();

    int num; // A,B,C 곱한 결과
    num = A * B * C;

    int i,temp, arr1[10];
    int arr2[10] = { 0, };

    for (i = 0;i < 10;i++) //num의 각 자리수를 arr1 배열에 넣는 과정
    {
        arr1[i] = num % 10; 
        num = num / 10;
        if (num == 0) // 이 과정을 넣은 이유는 이 과정이 없었다면 num이 0이 되는게 두번이나 더 발생해 후에 0 카운트를 2번이나 더하게 된다
        {
            temp = i+1; 
            break;
        }
        
    }
    for (i = 0;i < temp;i++) // arr1의 i번째 인덱스에는 0~9까지의 수가 있을텐데 그 수를 arr2배열의 인덱스로 사용하면 그 수가 몇번 쓰였는지 알 수 있다.
    {
        arr2[arr1[i]]++;
    }

    for (i = 0;i < 10;i++)
    {
        printf("%d\n", arr2[i]);
    }
    return 0;

}
