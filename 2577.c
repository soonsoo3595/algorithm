#include <stdio.h>

int main()
{
    int A, B, C;
    scanf("%d", &A);
    getchar(); // �տ��� ���͸� �ļ� ���۸� ����ִ� ����
    scanf("%d", &B);
    getchar();
    scanf("%d", &C);
    getchar();

    int num; // A,B,C ���� ���
    num = A * B * C;

    int i,temp, arr1[10];
    int arr2[10] = { 0, };

    for (i = 0;i < 10;i++) //num�� �� �ڸ����� arr1 �迭�� �ִ� ����
    {
        arr1[i] = num % 10; 
        num = num / 10;
        if (num == 0) // �� ������ ���� ������ �� ������ �����ٸ� num�� 0�� �Ǵ°� �ι��̳� �� �߻��� �Ŀ� 0 ī��Ʈ�� 2���̳� ���ϰ� �ȴ�
        {
            temp = i+1; 
            break;
        }
        
    }
    for (i = 0;i < temp;i++) // arr1�� i��° �ε������� 0~9������ ���� �����ٵ� �� ���� arr2�迭�� �ε����� ����ϸ� �� ���� ��� �������� �� �� �ִ�.
    {
        arr2[arr1[i]]++;
    }

    for (i = 0;i < 10;i++)
    {
        printf("%d\n", arr2[i]);
    }
    return 0;

}