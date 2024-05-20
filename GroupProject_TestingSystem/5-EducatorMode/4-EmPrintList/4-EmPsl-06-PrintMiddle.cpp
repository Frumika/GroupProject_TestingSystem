#include <algorithm>

#include "4-EmPsl-01-Header.h"
#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
int MiddleFilterMenu()
{
    char button;
    bool condition;
    system("cls");
    cout
           << "|--------------------------------------------------|" << endl
           << "|          >>> Вывод списка студентов <<<          |" << endl
           << "|--------------------------------------------------|" << endl
           << "| 1. Вывести список без фильтрации                 |" << endl
           << "| 2. Вывести список со средним баллом 2-3          |" << endl
           << "| 3. Вывести список со средним баллом 3-4          |" << endl
           << "| 4. Вывести список со средним баллом 4-5           |" << endl
           << "|--------------------------------------------------|" << endl;
    do
    {
        button = _getch();
        condition = (button == '1' || button == '2' || button == '3' || button == '4');
    }
    while (condition == false);
    switch (button)
    {
    case '1': {return 6; }
        break;
    case '2': { return 2; }
        break;
    case '3': {return 3; }
        break;
    case '4': {return 4; }
        break;
    }
    return 300;
}
void PrintMiddleMark(SList list, int mark)
{
    if (list.head == NULL) {
        cout << "Список пуст" << endl;
        return;
    }
    SNode *tmp=list.head;
    int namel=MaxLenName(list);
    int surnamel=MaxLenSurname(list);
    int k=namel+surnamel+12+6+2;
    bool fl=false;
    PrintPodcher(k,namel,surnamel,true);
    cout<< "|"<<setw(2)<<left<<"№"<<"|";
    cout<<setw(2)<<left<<"ID"<<"|";
    cout<<setw(namel)<<left<<"Имя"<<"|";
    cout<<setw(surnamel)<<left<<"Фамилия"<<"|";
    cout<<setw(12)<<left<<"Средний балл"<<"|"<<endl;
    PrintPodcher(k,namel,surnamel,true);
    int i=0;
    while (tmp->next != nullptr)
    {if((tmp->student.middleMark>=mark && tmp->student.middleMark<=mark+1)|| mark==6)
    {
        i+=1;
        cout<< "|"<<setw(2)<<left<<i<< "|";
        cout<<setw(2)<<left<<(tmp->student.id) << "|";
        cout<<setw(namel)<<left<<(tmp->student.name) << "|";
        cout<<setw(surnamel)<<left<<(tmp->student.surname) << "|";
        cout<<setw(5)<<left<<""<<setw(7)<<left<<(tmp->student.middleMark) << "|"<<endl;
        PrintPodcher(k,namel,surnamel,false);
        fl=true;
    }
        tmp = tmp->next;
    }
    if((tmp->student.middleMark>=mark && tmp->student.middleMark<=mark+1)|| mark==6)
    {
        i+=1;
        cout<< "|"<<setw(2)<<left<<i<< "|";
        cout<<setw(2)<<left<<(tmp->student.id) << "|";
        cout<<setw(namel)<<left<<(tmp->student.name) << "|";
        cout<<setw(surnamel)<<left<<(tmp->student.surname) << "|";
        cout<<setw(5)<<left<<""<<setw(7)<<left<<(tmp->student.middleMark) << "|"<<endl;
        PrintPodcher(k,namel,surnamel,true);
        fl=true;
    }
    if(fl==false){cout<<"|      Нет студентов с баллом "<<mark<<"-"<<mark+1<<"    |"<<endl;PrintPodcher(k,namel,surnamel,true);}
}