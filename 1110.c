#include <stdio.h>

int main()
{
    int N, new, test, fir, sec, cycle = 0;
    scanf("%d", &N); // N ���� �Է�
    test = N; 

    while (1)
    {

        fir = test / 10; 
        sec = test % 10;
        new = sec * 10 + ((fir + sec) % 10);
        //���ο� ���� �� �� ���� ���� �ڸ��� ���� �ڸ��� �����ڸ� + �����ڸ��� �����ڸ��� �̵��ؼ� �������
        test = new; 
        cycle++;// while���� �ѹ��������� cycle 1�� ����
        if (test == N) // �Ź� �ٲ�� ���� ó�� ���� ������ Ȯ��
        {
            printf("%d\n", cycle);
            break;
        }
    }
}