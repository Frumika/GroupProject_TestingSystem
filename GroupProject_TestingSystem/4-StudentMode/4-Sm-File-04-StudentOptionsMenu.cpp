#include <iostream>
#include <conio.h>
#include <windows.h>

#include "4-Sm-File-01-Header.h"

using namespace std;


void runStudentOptionsMenu()
{
    char button;
    bool condition;

    do
    {
        //system("cls");

        cout
            << "|--------------------------------------------------|" << endl
            << "|             >>> Меню студента <<<                |" << endl
            << "|--------------------------------------------------|" << endl
            << "| 1. Тренинг по теме                               |" << endl
            << "| 2. ...                                           |" << endl
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
                    runTrainingOnTheTopic();
                }
                break;
            case '2':
                {
                    "* Тестирование по теме *";
                }
                break;
            case '3':
                {
                    "* Итоговый тест *";
                }
            default: break;
        }
    }
    while (button != '0');
}