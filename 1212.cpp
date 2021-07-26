#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string str;
    cin >> str;

    int len = str.size();
    //�� �ε����� 8�� ���� �ʴ´ٴ� �� 8�����̹Ƿ�
    for (int i = 0; i < len; i++)
    {
        int num = str[i] - '0'; // �ߺ��Ǵ� ǥ�� ���ϱ����� ����
       
        if (num > 3) // 3 �ʰ���� 100,101,110,111 �߿� �ϳ�
        {
            cout << '1'; // ���� 1 ���
            if (num > 5) // num�� 6,7�� ���
            {
                cout << '1'; // ������� "11"
                if (num > 6) // num�� 7�̸� "111",6�̸� "110"
                    cout << '1';
                else
                    cout << '0';
            }
            else // num�� 4,5�� ���
            {
                cout << '0';
                if (num > 4) // num�� 4�� 100, num�� 5�� 101
                    cout << '1';
                else
                    cout << '0';
            }

        }
        else if (num > 1) // num�� 2,3�� ���
        {
            if (i != 0) // ���� ù��° �ε������ �տ� 0�� ���̸� �ȵǴϱ� ����ó��
                cout << '0';

            if (num == 2) // �� ����
                cout << "10";
            else
                cout << "11";

        }
        else
        {
            if (i != 0)// ���� ù��° �ε������ �տ� 00�� ���̸� �ȵǴϱ� ����ó��
                cout << "00";
            if (num == 0) // �� ����
                cout << '0';
            else
                cout << '1';
        }
    }

    return 0;
}