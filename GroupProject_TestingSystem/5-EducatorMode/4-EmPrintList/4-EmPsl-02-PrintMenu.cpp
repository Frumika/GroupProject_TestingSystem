#include "4-EmPsl-01-Header.h"
#include <iostream>
#include <conio.h>
#include <list>

using namespace std;

/*
 * 
 */
void runMenuOfPrintListOfStudent()
{
    char button;
    bool condition;
    system("cls");
    cout
           << "|--------------------------------------------------|" << endl
           << "|          >>> ����� ������ ��������� <<<          |" << endl
           << "|--------------------------------------------------|" << endl
           << "| 1. ������� ������ �������                        |" << endl
           << "| 2. ������� ������ � �������� �� ���������� ����  |" << endl
           << "| 3. ������� ������ � �������� �� ��������� �����  |" << endl
           << "| 4. ������� ������ �� ������� ������              |" << endl
           << "| 5. ������� ������ � ������������� �������        |" << endl
           << "| 0. ���������                                     |" << endl
           << "|--------------------------------------------------|" << endl;
    do
    {
        button = _getch();
        condition = (button == '1' || button == '2' || button == '3' || button == '4' || button == '5' || button == '0');
    }
    while (condition == false);
    SList *list=createSList();
    switch (button)
    {
    case '1': {print_list(*list); }
        break;
    case '2': { PrintOneTheme(); }
        break;
    case '3': {int mark=Filter(); SortMenuForEx(*list);PrintExamMark(*list,mark); }
        break;
    case '4': {int mark=MiddleFilterMenu();SortMenuForMid(*list);PrintMiddleMark(*list,mark); }
        break;
    case '5': {int mark=Filter();  SortMenuForMid(*list);PrintTests(*list,mark); }
        break;
    }
    system("pause");
}
