#include "3-EmEsl-File-01-Header.h"
#include <iostream>
#include <conio.h>

using namespace std;


/*
 * 
 */
void changeTopic(SList& list, SNode& current)
{
    char button;
    bool condition;

    do
    {
        system("cls");

        cout
            << "|--------------------------------------------------|" << endl
            << "|            Изменение оценки за тему              |" << endl
            << "|--------------------------------------------------|" << endl
            << "| 1. Изменить оценку за тему: Циклы                |" << endl
            << "| 2. Изменить оценку за тему: Массивы              |" << endl
            << "| 3. Изменить оценку за тему: Строки               |" << endl
            << "| 4. Изменить оценку за тему: Рекурсия             |" << endl
            << "| 5. Изменить оценку за тему: Структуры            |" << endl
            << "| 6. Изменить оценку за тему: Файлы                |" << endl
            << "| 7. Изменить оценку за тему: Адреса и указатели   |" << endl
            << "| 8. Изменить оценку за тему: Динамическая память  |" << endl
            << "| 0. Вернуться                                     |" << endl
            << "|--------------------------------------------------|" << endl;

        do
        {
            button = _getch();
            condition = (
                button == '1' ||
                button == '2' ||
                button == '3' ||
                button == '4' ||
                button == '5' ||
                button == '6' ||
                button == '7' ||
                button == '8' ||
                button == '0');
        }
        while (condition == false);

        switch (button)
        {
        case '1':
            {
                changeGradeForTopic(list, current, 0);
            }
            break;

        case '2':
            {
                changeGradeForTopic(list, current, 1);
            }
            break;

        case '3':
            {
                changeGradeForTopic(list, current, 2);
            }
            break;

        case '4':
            {
                changeGradeForTopic(list, current, 3);
            }
            break;

        case '5':
            {
                changeGradeForTopic(list, current, 4);
            }
            break;

        case '6':
            {
                changeGradeForTopic(list, current, 5);
            }
            break;

        case '7':
            {
                changeGradeForTopic(list, current, 6);
            }
            break;

        case '8':
            {
                changeGradeForTopic(list, current, 7);
            }
            break;
        }
    }
    while (button != '0');
}
