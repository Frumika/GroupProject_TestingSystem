#include "3-EmEsl-File-01-Header.h"
#include <iostream>
#include <conio.h>

using namespace std;

void changeExam(SNode& current)
{
    char button;
    bool condition;

    do
    {
        system("cls");

        cout
            << "|--------------------------------------------------|" << endl
            << "|          Изменить информацию за экзамен          |" << endl
            << "|--------------------------------------------------|" << endl
            << "| 1. Изменить оценку за экзамен                    |" << endl
            << "| 2. Изменить стутус сдачи экзамена                |" << endl
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
                changeGradeForExam(current);
            }
            break;

        case '2':
            {
                changeStatusOfExam(current);
            }
            break;
        }
    }
    while (button != '0');
}
