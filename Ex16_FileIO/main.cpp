/*
    ȫ���� ������ https://honglab.co.kr/
*/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // ���� ���
    {
        ofstream ofile;

        ofile.open("my_contacts.txt");
        ofile << "�ȳ��ϼ���? �ݰ����ϴ�.\n";
        ofile << "�� ��° ���Դϴ�.\n";
        ofile << "�� ��° ���Դϴ�.\n";
        ofile.close();
    }

    // ���� �Է�
    {
        char line[100];

        ifstream ifile;
        ifile.open("my_contacts.txt");

        int line_number = 0;
        while (ifile.getline(line, sizeof(line)))
        {
            cout << line_number << " : ";
            cout << line << endl;

            line_number += 1;
        }

        ifile.close();
    }

    return 0;
}
