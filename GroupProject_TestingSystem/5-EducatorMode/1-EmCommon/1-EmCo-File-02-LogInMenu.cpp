#include "1-EmCo-File-01-Header.h"
#include <iostream>

using namespace std;


/*
 * 
 */
void runEducatorLogInMenu()
{
    char* password = nullptr;
    bool isPasswordTrue = true;
    bool exit;
    int condition;

    do
    {
        password = (char*)malloc(sizeof(char) * 1);
        password[0] = '\0';
        do
        {
            system("cls");

            cout
                << "|--------------------------------------------------|" << endl
                << "|               >>> ����������� <<<                |" << endl
                << "|--------------------------------------------------|" << endl
                << "| ������: ";

            if (password[0] == '\0' && isPasswordTrue == true)
            {
                cout << "������� ������" << endl;
            }

            else if (password[0] == '\0' && isPasswordTrue == false)
            {
                cout << "������ ��������. ������� ������ ������" << endl;
            }

            else puts(password);

            cout
                << "|--------------------------------------------------|" << endl
                << "|   ��� ����������� ������� � ���� ������� SPACE   |" << endl
                << "|--------------------------------------------------|" << endl
                << "|     ��� �������� �������� ������� BACKSPACE      |" << endl
                << "|--------------------------------------------------|" << endl
                << "|       ��� ����������� ����� ������� ENTER        |" << endl
                << "|--------------------------------------------------|" << endl;

            condition = enterSymbol(password);
        }
        while (condition > -1);

        if (condition == -1) isPasswordTrue = compareStrings(password, EDUCATOR_PASSWORD);
        
        free(password);

        exit = ((isPasswordTrue == true) || (condition == -2));
    }
    while (exit == false);

    /*
     * ���� ����� �������� ��������� (-1 - ������ ���� ������) �� ���������� ��������� ����
     * ����� ����������� ���������� ���� ������� � �� ������������ � ����������, ��� ����� ������ ����
     */
    if (condition == -1) runEducatorOptionMenu();
}
