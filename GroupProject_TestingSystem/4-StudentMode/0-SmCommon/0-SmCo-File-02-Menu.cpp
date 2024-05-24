#include "0-SmCo-File-01-Header.h"
#include <iostream>
#include <conio.h>

using namespace std;

/*
 * 
 */
void runStudentMenu(Student& student)
{
    char button;
    bool condition;

    do
    {
        system("cls");

        cout
            << "|--------------------------------------------------|" << endl
            << "|           >>> Система тестирования <<<           |" << endl
            << "|--------------------------------------------------|" << endl
            << "| 1. Тренинг по теме                               |" << endl
            << "| 2. Тестирование по теме                          |" << endl
            << "| 3. Итоговый тест                                 |" << endl
            << "| 0. Выйти                                         |" << endl
            << "|--------------------------------------------------|" << endl;

        do
        {
            button = _getch();
            condition = (button == '1' || button == '2' || button == '3' || button == '0');
        }
        while (condition == false);

        switch (button)
        {
        case '1':
            {
                runTrainingMode(student);
            };
            break;
        case '2':
            {
                runTestMode(student);
            };
            break;

        case '3':
            {
                runExamMode(student);
            };
            break;
        }
    }
    while (button != '0');
}
