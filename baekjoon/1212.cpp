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
    //각 인덱스는 8을 넘지 않는다는 점 8진법이므로
    for (int i = 0; i < len; i++)
    {
        int num = str[i] - '0'; // 중복되는 표현 피하기위한 변수
       
        if (num > 3) // 3 초과라면 100,101,110,111 중에 하나
        {
            cout << '1'; // 먼저 1 출력
            if (num > 5) // num이 6,7인 경우
            {
                cout << '1'; // 현재까지 "11"
                if (num > 6) // num이 7이면 "111",6이면 "110"
                    cout << '1';
                else
                    cout << '0';
            }
            else // num이 4,5인 경우
            {
                cout << '0';
                if (num > 4) // num이 4면 100, num이 5면 101
                    cout << '1';
                else
                    cout << '0';
            }

        }
        else if (num > 1) // num이 2,3인 경우
        {
            if (i != 0) // 만약 첫번째 인덱스라면 앞에 0을 붙이면 안되니까 예외처리
                cout << '0';

            if (num == 2) // 두 갈래
                cout << "10";
            else
                cout << "11";

        }
        else
        {
            if (i != 0)// 만약 첫번째 인덱스라면 앞에 00을 붙이면 안되니까 예외처리
                cout << "00";
            if (num == 0) // 두 갈래
                cout << '0';
            else
                cout << '1';
        }
    }

    return 0;
}
