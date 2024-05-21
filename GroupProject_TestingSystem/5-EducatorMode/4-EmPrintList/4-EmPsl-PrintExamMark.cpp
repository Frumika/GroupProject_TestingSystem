#include "4-EmPsl-01-Header.h"
#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
void PrintExamMark(SList list,int mark)
{
    if (list.head == NULL) {
        cout << "Список пуст" << endl;
        return;
    }
    bool fl=false;
    SNode *tmp=list.head;
    int namel=MaxLenName(list);
    int surnamel=MaxLenSurname(list);
    int k=namel+surnamel+13+6+2;
    PrintPodcher(k,namel,surnamel,true);
    cout<< "|"<<setw(2)<<left<<"№"<<"|";
    cout<<setw(2)<<left<<"ID"<<"|";
    cout<<setw(namel)<<left<<"Имя"<<"|";
    cout<<setw(surnamel)<<left<<"Фамилия"<<"|";
    cout<<setw(13)<<left<<"Итоговый тест"<<"|"<<endl;
    PrintPodcher(k,namel,surnamel,true);
    int i=0;
    while (tmp->next != nullptr)
    {  if(tmp->student.examMark==mark || mark==6)
    {
        i+=1;
        cout<< "|"<<setw(2)<<left<<i<< "|";
        cout<<setw(2)<<left<<(tmp->student.id) << "|";
        cout<<setw(namel)<<left<<(tmp->student.name) << "|";
        cout<<setw(surnamel)<<left<<(tmp->student.surname) << "|";
        if(tmp->student.examStatus)
        {
            cout<<setw(6)<<left<<""<<setw(7)<<left<<(tmp->student.examMark) << "|"<<endl;
        }
        else
        {
            cout<<setw(3)<<left<<""<<setw(10)<<left<<"Не сдан" << "|"<<endl;
        }
        PrintPodcher(k,namel,surnamel,false);
        fl=true;
    }
        tmp = tmp->next;
    }
    if(tmp->student.examMark==mark || mark==6)
    {
        i+=1;
        cout<< "|"<<setw(2)<<left<<i<< "|";
        cout<<setw(2)<<left<<(tmp->student.id) << "|";
        cout<<setw(namel)<<left<<(tmp->student.name) << "|";
        cout<<setw(surnamel)<<left<<(tmp->student.surname) << "|";
        if(tmp->student.examStatus)
        {
            cout<<setw(6)<<left<<""<<setw(7)<<left<<(tmp->student.examMark) << "|"<<endl;
        }
        else
        {
            cout<<setw(3)<<left<<""<<setw(10)<<left<<"Не сдан" << "|"<<endl;
        }
        PrintPodcher(k,namel,surnamel,true);
        fl=true;
    }
    if (fl==false){cout<<"|      Нет студентов с оценкой "<<mark<<"      |"<<endl;PrintPodcher(k,namel,surnamel,true);}
}