/*
    ȫ���� ������ https://honglab.co.kr/
*/

#include <iostream> // iostream�̶�� ����� ����(include)

using namespace std; // ���ӽ����̽� ���� std::cout

int main() // entry point
{
    // �ּ�(comment) �ٴ� ���

    cout << "Hello, World!�ູ" << endl;
    // printf("Hello World!!! by printf");

    // ����¿� ���ؼ��� �ڿ� �ٽ� ���Ϳ�.
    char user_input[100];
    cin >> user_input;
    cout << user_input;

    return 0;
}
