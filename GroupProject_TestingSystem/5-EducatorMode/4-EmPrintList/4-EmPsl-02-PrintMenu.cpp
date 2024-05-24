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
           << "|          >>> Вывод списка студентов <<<          |" << endl
           << "|--------------------------------------------------|" << endl
           << "| 1. Вывести список целиком                        |" << endl
           << "| 2. Вывести список с оценками по конкретной теме  |" << endl
           << "| 3. Вывести список с оценками по итоговому тесту  |" << endl
           << "| 4. Вывести список со средним баллом              |" << endl
           << "| 5. Вывести список с тематическими тестами        |" << endl
           << "| 0. Вернуться                                     |" << endl
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
