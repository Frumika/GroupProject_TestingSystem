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
            << "|          �������� ���������� �� �������          |" << endl
            << "|--------------------------------------------------|" << endl
            << "| 1. �������� ������ �� �������                    |" << endl
            << "| 2. �������� ������ ����� ��������                |" << endl
            << "| 0. ���������                                     |" << endl
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
