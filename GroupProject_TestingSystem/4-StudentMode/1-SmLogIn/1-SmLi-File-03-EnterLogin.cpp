#include "1-SmLi-File-01-Header.h"
#include <iostream>
#include <conio.h>

using namespace std;

/*
 * Возвращает
 * 1. от 1 до бесконечности - id если студент с данным логином существует
 * 2. 0 - студента нет
 * 3. -1 - экстренно завершен ввод
 */
int enterStudentLogin(SList& list, bool isTrue)
{
    char* login;
    int studentID = 0;
    bool isLoginTrue = isTrue;
    int condition;
    bool exit;


    login = new char[1]{'\0'};

    do
    {
        system("cls");

        cout
            << "|--------------------------------------------------|" << endl
            << "|              Введите логин студента              |" << endl
            << "|--------------------------------------------------|" << endl
            << "| Логин: ";

        if (login[0] == '\0' && isLoginTrue == true)
        {
            cout << "Введите логин" << endl;
        }

        else if (login[0] == '\0' && isLoginTrue == false)
        {
            cout << "Логин неверный. Введите логин заново" << endl;
        }

        else puts(login);

        cout
            << "|--------------------------------------------------|" << endl
            << "|   Для возвращения обратно в меню нажмите SPACE   |" << endl
            << "|--------------------------------------------------|" << endl
            << "|     Для удаления значения нажмите BACKSPACE      |" << endl
            << "|--------------------------------------------------|" << endl
            << "|       Для прекращения ввода нажмите ENTER        |" << endl
            << "|--------------------------------------------------|" << endl;

        condition = enterSymbol(login);
        exit = (condition == -2) || (condition == -1 && login[0] != '\0');
    }
    while (exit == false);

    if (condition == -1) studentID = searchSLogin(list, string(login));
    else if (condition == -2) studentID = -1;

    delete[] login;

    return studentID;
}
