#include "3-EmEsl-File-01-Header.h"
#include <iostream>

using namespace std;

int _enterName(Student& student)
{
    char* name = nullptr;
    int condition;
    bool exit;

    name = (char*)malloc(sizeof(char) * 1);
    name[0] = '\0';
    do
    {
        system("cls");

        cout
            << "|--------------------------------------------------|" << endl
            << "|               Введите имя студента               |" << endl
            << "|--------------------------------------------------|" << endl
            << "| Пароль: ";

        if (name[0] == '\0') cout << "Введите имя" << endl;
        else puts(name);

        cout
            << "|--------------------------------------------------|" << endl
            << "|   Для возвращения обратно в меню нажмите SPACE   |" << endl
            << "|--------------------------------------------------|" << endl
            << "|     Для удаления значения нажмите BACKSPACE      |" << endl
            << "|--------------------------------------------------|" << endl
            << "|       Для прекращения ввода нажмите ENTER        |" << endl
            << "|--------------------------------------------------|" << endl;
        condition = enterSymbol(name);
        exit = (condition == -2) || (condition == -1 && name[0] != '\0');
    }
    while (exit == false);

    if (condition == -1)
    {
        student.name = string(name);
        
        free(name);
        return 1;
    }
    else
    {
        free(name);
        return 0;
    }
}