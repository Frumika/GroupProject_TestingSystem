#include "3-EmEsl-File-01-Header.h"
#include <iostream>
#include <conio.h>

using namespace std;

/*
 * 
 */
void runEditStudentListMenu()
{
    char button;
    bool condition;

    do
    {
        system("cls");

        cout
            << "|--------------------------------------------------|" << endl
            << "|       >>> ������ �� ������� ��������� <<<        |" << endl
            << "|--------------------------------------------------|" << endl
            << "| 1. ������� ��������                              |" << endl
            << "| 2. �������� ��������                             |" << endl
            << "| 3. �������� �������� ��������                    |" << endl
            << "| 4. ������� ������ ���������                      |" << endl
            << "| 0. ���������                                     |" << endl
            << "|--------------------------------------------------|" << endl;

        do
        {
            button = _getch();
            condition = (button == '1' || button == '2' || button == '3' || button == '4' || button == '0');
        }
        while (condition == false);

        switch (button)
        {
        case '1': { runMenuOfDeleteStudent(); }
            break;
        case '2': { runMenuOfAddOfStudent(); }
            break;
        case '3': { runMenuOfChangeProgressOfStudent(); }
            break;
        case '4': {runMenuOfPrintListOfStudent(); }
            break;
        }
    }
    while (button != '0');
}
