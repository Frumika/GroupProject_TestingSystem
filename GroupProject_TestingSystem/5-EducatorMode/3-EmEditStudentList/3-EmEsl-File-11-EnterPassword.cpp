#include "3-EmEsl-File-01-Header.h"
#include <iostream>

using namespace std;

int _enterPassword(Student& student)
{
    char* password = nullptr;
    int condition;
    bool exit;

    password = (char*)malloc(sizeof(char) * 1);
    password[0] = '\0';
    do
    {
        system("cls");

        cout
            << "|--------------------------------------------------|" << endl
            << "|              Введите пароль студента             |" << endl
            << "|--------------------------------------------------|" << endl
            << "| Пароль: ";

        if (password[0] == '\0') cout << "Введите пароль" << endl;
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

    if (condition == -1)
    {
        student.password = string(password);
        
        free(password);
        return 1;
    }
    else
    {
        free(password);
        return 0;
    }
}
