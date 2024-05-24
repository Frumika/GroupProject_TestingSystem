#include "1-SmLi-File-01-Header.h"
#include <iostream>
#include <conio.h>

using namespace std;

/*
 * Возвращает:
 * 1. 1 - Пароль верный
 * 2. 0 - Пароль неверный
 * 3. -1 - экстренно завершен ввод
 */
int enterStudentPassword(SList& list, bool isTrue, int studentID)
{
    char* password;
    int isPasswordTrue;
    bool isEnterTrue = isTrue;
    int condition;
    bool exit;


    password = new char[1]{'\0'};

    do
    {
        system("cls");

        cout
            << "|--------------------------------------------------|" << endl
            << "|             Введите пароль студента              |" << endl
            << "|--------------------------------------------------|" << endl
            << "| Пароль: ";

        if (password[0] == '\0' && isEnterTrue == true)
        {
            cout << "Введите пароль" << endl;
        }

        else if (password[0] == '\0' && isEnterTrue == false)
        {
            cout << "Пароль неверный. Введите пароль заново" << endl;
        }

        else puts(password);

        cout
            << "|--------------------------------------------------|" << endl
            << "|   Для возвращения обратно в меню нажмите SPACE   |" << endl
            << "|--------------------------------------------------|" << endl
            << "|     Для удаления значения нажмите BACKSPACE      |" << endl
            << "|--------------------------------------------------|" << endl
            << "|       Для прекращения ввода нажмите ENTER        |" << endl
            << "|--------------------------------------------------|" << endl;

        condition = enterSymbol(password);
        exit = (condition == -2) || (condition == -1 && password[0] != '\0');
    }
    while (exit == false);

    if (condition == -1) isPasswordTrue = searchSPassword(list, string(password), studentID);
    else if (condition == -2) isPasswordTrue = -1;

    delete[] password;

    return isPasswordTrue;
}
