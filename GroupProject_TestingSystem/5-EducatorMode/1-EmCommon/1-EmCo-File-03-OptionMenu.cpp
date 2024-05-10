#include "1-EmCo-File-01-Header.h"
#include <iostream>
#include <conio.h>

using namespace std;

void runEducatorOptionMenu()
{
    char button;
    bool condition;

    do
    {
        system("cls");

        cout
            << "|--------------------------------------------------|" << endl
            << "|                 >>> Опции <<<                    |" << endl
            << "|--------------------------------------------------|" << endl
            << "| 1. Редактирование вопросов                       |" << endl
            << "| 2. Работа со списком студентов                   |" << endl
            << "| 0. Выйти                                         |" << endl
            << "|--------------------------------------------------|" << endl;

        do
        {
            button = _getch();
            condition = (button == '1' || button == '2' || button == '0');
        }
        while (condition == false);

        switch (button)
        {
        case '1':
            {
                runEditQuestionsMenu();
            }
            break;
        case '2':
            {
                runEditStudentListMenu();
            }
            break;
        }
    }
    while (button != '0');
}
