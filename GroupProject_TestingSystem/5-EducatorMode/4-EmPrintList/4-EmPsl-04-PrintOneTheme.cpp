#include <complex.h>

#include "4-EmPsl-01-Header.h"
#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
void PrintSelectedTheme(SList list,int num,int mark)
{
    if (list.head == NULL) {
        cout << "Список пуст" << endl;
        return;
    }
    bool fl=false;
    SNode *tmp=list.head;
    int namel=MaxLenName(list);
    int surnamel=MaxLenSurname(list);
    int k=namel+surnamel+7+6+2;
    PrintPodcher(k,namel,surnamel,true);
    cout<< "|"<<setw(2)<<left<<"№"<<"|";
    cout<<setw(2)<<left<<"ID"<<"|";
    cout<<setw(namel)<<left<<"Имя"<<"|";
    cout<<setw(surnamel)<<left<<"Фамилия"<<"|";
    cout<<setw(6)<<left<<"Тест"<<num<<"|"<<endl;
    PrintPodcher(k,namel,surnamel,true);
    int i=0;
    while (tmp->next != nullptr)
    {
        if(tmp->student.marks[num-1]==mark || mark==6){
            i+=1;
            cout<< "|"<<setw(2)<<left<<i<< "|";
            cout<<setw(2)<<left<<(tmp->student.id) << "|";
            cout<<setw(namel)<<left<<(tmp->student.name) << "|";
            cout<<setw(surnamel)<<left<<(tmp->student.surname) << "|";
            if(tmp->student.marks[num-1]){cout<<setw(3)<<left<<""<<setw(4)<<left<<(tmp->student.marks[num-1])<< "|"<<endl;}
            else{cout<<setw(7)<<left<<"Не сдан"<< "|"<<endl;}
            fl=true;
            PrintPodcher(k,namel,surnamel,false);
        }
        tmp = tmp->next;
    }
    if(tmp->student.marks[num-1]==mark || mark==6){
        i+=1;
        cout<< "|"<<setw(2)<<left<<i<< "|";
        cout<<setw(2)<<left<<(tmp->student.id) << "|";
    cout<<setw(namel)<<left<<(tmp->student.name) << "|";
    cout<<setw(surnamel)<<left<<(tmp->student.surname) << "|";
        if(tmp->student.marks[num-1]){cout<<setw(3)<<left<<""<<setw(4)<<left<<(tmp->student.marks[num-1])<< "|"<<endl;}
        else{cout<<setw(7)<<left<<"Не сдан"<< "|"<<endl;}
        fl=true;
        PrintPodcher(k,namel,surnamel,true);
    }
    if (fl==false){cout<<"|   Нет студентов с оценкой "<<mark<<"   |"<<endl;PrintPodcher(k,namel,surnamel,true);}
}
int PrintOneTheme()
{
    char button;
    bool condition;
    system("cls");
    cout
           << "|--------------------------------------------------|" << endl
           << "|              >>>  Выберите тему  <<<             |" << endl
           << "|--------------------------------------------------|" << endl
           << "| 1. Тема 1: Циклы                                 |" << endl
           << "| 2. Тема 2: Массивы                               |" << endl
           << "| 3. Тема 3: Строки                                |" << endl
           << "| 4. Тема 4: Рекурсия                              |" << endl
           << "| 5. Тема 5: Структуры                             |" << endl
           << "| 6. Тема 6: Файлы                                 |" << endl
           << "| 7. Тема 7: Адреса и указатели                    |" << endl
           << "| 8. Тема 8: Динамическая память                   |" << endl
           << "| 0. Вернуться                                     |" << endl
           << "|--------------------------------------------------|" << endl;
    do
    {
        button = _getch();
        condition = (button == '1' || button == '2' || button == '3' || button == '4' || button == '5' || button == '6' || button == '7' || button == '8'|| button == '0');
    }
    while (condition == false);
    SList *list=createSList();
    int mark;
    switch (button)
    {
    case '1':{mark=Filter();SortMenuForOneTest(*list,0);PrintSelectedTheme(*list,1,mark);}break;
    case '2':{mark=Filter();SortMenuForOneTest(*list,1);PrintSelectedTheme(*list,2,mark);}break;
    case '3':{mark=Filter();SortMenuForOneTest(*list,2);PrintSelectedTheme(*list,3,mark);}break;
    case '4':{mark=Filter();SortMenuForOneTest(*list,3);PrintSelectedTheme(*list,4,mark);}break;
    case '5':{mark=Filter();SortMenuForOneTest(*list,4);PrintSelectedTheme(*list,5,mark);}break;
    case '6':{mark=Filter();SortMenuForOneTest(*list,5);PrintSelectedTheme(*list,6,mark);}break;
    case '7':{mark=Filter();SortMenuForOneTest(*list,6);PrintSelectedTheme(*list,7,mark);}break;
    case '8':{mark=Filter();SortMenuForOneTest(*list,7);PrintSelectedTheme(*list,8,mark);}break;
    }
    return 0;
}
    