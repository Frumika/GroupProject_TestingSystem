#include "3-EmEsl-File-01-Header.h"
#include <iostream>
#include <conio.h>

using namespace std;


void showMenuOfChanges(SList& list, int& studentID)
{
    char button;
    bool condition;
    SNode* current = findSNodeById(list, studentID);

    do
    {
        system("cls");

        cout
            << "|--------------------------------------------------|" << endl
            << "|                       Опции                      |" << endl
            << "|--------------------------------------------------|" << endl
            << "| 1. Изменить оценку за тему                       |" << endl
            << "| 2. Изменить оценку за экзамен                    |" << endl
            << "| 0. Вернуться                                     |" << endl
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
                changeTopic(*current);
            }
            break;

        case '2':
            {
                changeExam(*current);
            }
            break;
        }
    }
    while (button != '0');
}
