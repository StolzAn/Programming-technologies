#include "Libraries.h"

int task_three(int max_length)
{
    ifstream file("C:\\FilesC\\Tekst1.txt");  // ��������� ���� ��� ������(���� � ����� ��� ���������� ��������)
    if (!file.is_open())
    {  // ��������� �������� �� ����
        cout << "������ �������� �����!" << endl;
        return 0;
    }
    char* line = new char[max_length]; //������� ������ ��� ���������� � ���� ������ �� �����

    while (file.getline(line, max_length))
    { // ��������� ������ �� ����� �� ����� �����
        bool containsTwoDigitNumber = false; //������� ������ ���������� ����������� �����������\���������� ������������ �����

        for (int i = 0; line[i] != '\0'; i++)
        {
            if (isDigit(line[i]) == true && isDigit(line[i + 1]) == true)
            {   // ��������� ������ ������ � ������ �� ������� ����
                if (line[i] == '0')
                {
                    continue;
                }
                containsTwoDigitNumber = true;
                break;
            }
        }
        if (containsTwoDigitNumber == false) { //���� � ������ ��� ����������� �����, �� ������� ��� ������
            cout << line << endl;
        }
    }

    delete[] line;   // ����������� ������ �� ������� char

    file.close();   // ��������� ����
    return 0;
}