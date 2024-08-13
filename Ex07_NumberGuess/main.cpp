/*
    ȫ���� ������ https://honglab.co.kr/
*/

#include <iostream>
#include <random> // ���� ����

using namespace std;

int main()
{
    // ���� ����
    // https://en.cppreference.com/w/cpp/numeric/random/uniform_int_distribution
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib(1, 99); // [1, 99]

    int number = distrib(gen);

    while (1) // true ��� ���� 1�� ���� �ݺ��� ���� ����մϴ�.
    {
        int guess;
        cout << "�Է�: ";
        cin >> guess;

        if (guess == number)
        {
            cout << guess << " ����!" << endl;
            break;
        }
        else if (guess > number)
        {
            cout << "�ʹ� Ŀ��!" << endl;
        }
        else
        {
            cout << "�ʹ� �۾ƿ�!" << endl;
        }
    }

    // ����: �ϳ��� �� ���ϴ� ����� ���� Ž�� ��

    return 0;
}
