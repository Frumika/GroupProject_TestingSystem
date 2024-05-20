#include "3-EmEsl-File-01-Header.h"
#include <iostream>

using namespace std;

int _enterSurname(Student& student)
{
    char* surname = nullptr;
    int condition;
    bool exit;

    surname = (char*)malloc(sizeof(char) * 1);
    surname[0] = '\0';
    do
    {
        system("cls");

        cout
            << "|--------------------------------------------------|" << endl
            << "|             Введите фамилию студента             |" << endl
            << "|--------------------------------------------------|" << endl
            << "| Пароль: ";

        if (surname[0] == '\0') cout << "Введите фамилию" << endl;
        else puts(surname);

        cout
            << "|--------------------------------------------------|" << endl
            << "|   Для возвращения обратно в меню нажмите SPACE   |" << endl
            << "|--------------------------------------------------|" << endl
            << "|     Для удаления значения нажмите BACKSPACE      |" << endl
            << "|--------------------------------------------------|" << endl
            << "|       Для прекращения ввода нажмите ENTER        |" << endl
            << "|--------------------------------------------------|" << endl;
        condition = enterSymbol(surname);
        exit = (condition == -2) || (condition == -1 && surname[0] != '\0');
    }
    while (exit == false);

    if (condition == -1)
    {
        student.surname = string(surname);
        
        free(surname);
        return 1;
    }
    else
    {
        free(surname);
        return 0;
    }
}