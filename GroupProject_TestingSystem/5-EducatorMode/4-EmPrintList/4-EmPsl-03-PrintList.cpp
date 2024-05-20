#include <complex.h>

#include "4-EmPsl-01-Header.h"
#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
int MaxLenName(SList list)
{
    int max=0;
    SNode *tmp=list.head;
    while (tmp->next != nullptr)
    {
        if (tmp->student.name.length()>max){max=tmp->student.name.length();}
        tmp = tmp->next;
    }
    if (tmp->student.name.length()>max){max=tmp->student.name.length();}
    return max;
}
int MaxLenSurname(SList list)
{
    int max=0;
    SNode *tmp=list.head;
    while (tmp->next != nullptr)
    {
        if (tmp->student.surname.length()>max){max=tmp->student.surname.length();}
        tmp = tmp->next;
    }
    if (tmp->student.surname.length()>max){max=tmp->student.surname.length();}
    return max;
}
void PrintPodcher(int k,int namel,int surnamel,bool top)
{
    cout<<"|";
    int nacop=0;
    for (int i=0;i<k;i++){
    // if(!top)
    // {
    //     switch (i)
    //     {
    //     case 2:cout<<"|";break;
    //     case (2+5):cout<<"|";break;
    //     case (2+5+10):cout<<"|";break;
    //     default:cout<<"-";break;
    //     }
    // }
        {cout<<"-";}
    }
    cout<<"|"<<endl;
}
void print_list(SList list) {
    if (list.head == NULL) {
        cout << "Список пуст" << endl;
        return;
    }
    SortMenu(list);
    SNode *tmp=list.head;
    int namel=MaxLenName(list);
    int surnamel=MaxLenSurname(list);
    int k=namel+surnamel+(7*8)+12+13+15+2;
    PrintPodcher(k,namel,surnamel,true);
    cout<< "|"<<setw(2)<<left<<"№"<<"|";
    cout<<setw(2)<<left<<"ID"<<"|";
    cout<<setw(namel)<<left<<"Имя"<<"|";
    cout<<setw(surnamel)<<left<<"Фамилия"<<"|";
    cout<<setw(7)<<left<<"Тест 1"<<"|";
    cout<<setw(7)<<left<<"Тест 2"<<"|";
    cout<<setw(7)<<left<<"Тест 3"<<"|";
    cout<<setw(7)<<left<<"Тест 4"<<"|";
    cout<<setw(7)<<left<<"Тест 5"<<"|";
    cout<<setw(7)<<left<<"Тест 6"<<"|";
    cout<<setw(7)<<left<<"Тест 7"<<"|";
    cout<<setw(7)<<left<<"Тест 8"<<"|";
    cout<<setw(12)<<left<<"Средний балл"<<"|";
    cout<<setw(13)<<left<<"Итоговый тест"<<"|"<<endl;
    PrintPodcher(k,namel,surnamel,true);
    int i=0;
    while (tmp->next != nullptr) {
        i+=1;
        cout<< "|"<<setw(2)<<left<<i<< "|";
        cout<<setw(2)<<left<<(tmp->student.id) << "|";
        cout<<setw(namel)<<left<<(tmp->student.name) << "|";
        cout<<setw(surnamel)<<left<<(tmp->student.surname) << "|";
        if(tmp->student.marks[0]){cout<<setw(3)<<left<<""<<setw(4)<<left<<(tmp->student.marks[0])<< "|";}
        else{cout<<setw(7)<<left<<"Не сдан"<< "|";}
        if(tmp->student.marks[1]){cout<<setw(3)<<left<<""<<setw(4)<<left<<(tmp->student.marks[1])<< "|";}
        else{cout<<setw(7)<<left<<"Не сдан"<< "|";}
        if(tmp->student.marks[2]){cout<<setw(3)<<left<<""<<setw(4)<<left<<(tmp->student.marks[2])<< "|";}
        else{cout<<setw(7)<<left<<"Не сдан"<< "|";}
        if(tmp->student.marks[3]){cout<<setw(3)<<left<<""<<setw(4)<<left<<(tmp->student.marks[3])<< "|";}
        else{cout<<setw(7)<<left<<"Не сдан"<< "|";}
        if(tmp->student.marks[4]){cout<<setw(3)<<left<<""<<setw(4)<<left<<(tmp->student.marks[4])<< "|";}
        else{cout<<setw(7)<<left<<"Не сдан"<< "|";}
        if(tmp->student.marks[5]){cout<<setw(3)<<left<<""<<setw(4)<<left<<(tmp->student.marks[5])<< "|";}
        else{cout<<setw(7)<<left<<"Не сдан"<< "|";}
        if(tmp->student.marks[6]){cout<<setw(3)<<left<<""<<setw(4)<<left<<(tmp->student.marks[6])<< "|";}
        else{cout<<setw(7)<<left<<"Не сдан"<< "|";}
        if(tmp->student.marks[7]){cout<<setw(3)<<left<<""<<setw(4)<<left<<(tmp->student.marks[7])<< "|";}
        else{cout<<setw(7)<<left<<"Не сдан"<< "|";}
        cout<<setw(5)<<left<<""<<setw(7)<<left<<(tmp->student.middleMark)<< "|";
        if(tmp->student.examStatus)
        {
            cout<<setw(6)<<left<<""<<setw(7)<<left<<(tmp->student.examMark) << "|"<<endl;
        }
        else
        {
            cout<<setw(3)<<left<<""<<setw(10)<<left<<"Не сдан" << "|"<<endl;
        }
        PrintPodcher(k,namel,surnamel,false);
        tmp = tmp->next;
    }
    i+=1;
    cout<< "|"<<setw(2)<<left<<i<< "|";
    cout<<setw(2)<<left<<(tmp->student.id) << "|";
    cout<<setw(namel)<<left<<(tmp->student.name) << "|";
    cout<<setw(surnamel)<<left<<(tmp->student.surname) << "|";
    if(tmp->student.marks[0]){cout<<setw(3)<<left<<""<<setw(4)<<left<<(tmp->student.marks[0])<< "|";}
    else{cout<<setw(7)<<left<<"Не сдан"<< "|";}
        
    if(tmp->student.marks[1]){cout<<setw(3)<<left<<""<<setw(4)<<left<<(tmp->student.marks[1])<< "|";}
    else{cout<<setw(7)<<left<<"Не сдан"<< "|";}
    if(tmp->student.marks[2]){cout<<setw(3)<<left<<""<<setw(4)<<left<<(tmp->student.marks[2])<< "|";}
    else{cout<<setw(7)<<left<<"Не сдан"<< "|";}
    if(tmp->student.marks[3]){cout<<setw(3)<<left<<""<<setw(4)<<left<<(tmp->student.marks[3])<< "|";}
    else{cout<<setw(7)<<left<<"Не сдан"<< "|";}
    if(tmp->student.marks[4]){cout<<setw(3)<<left<<""<<setw(4)<<left<<(tmp->student.marks[4])<< "|";}
    else{cout<<setw(7)<<left<<"Не сдан"<< "|";}
    if(tmp->student.marks[5]){cout<<setw(3)<<left<<""<<setw(4)<<left<<(tmp->student.marks[5])<< "|";}
    else{cout<<setw(7)<<left<<"Не сдан"<< "|";}
    if(tmp->student.marks[6]){cout<<setw(3)<<left<<""<<setw(4)<<left<<(tmp->student.marks[6])<< "|";}
    else{cout<<setw(7)<<left<<"Не сдан"<< "|";}
    if(tmp->student.marks[7]){cout<<setw(3)<<left<<""<<setw(4)<<left<<(tmp->student.marks[7])<< "|";}
    else{cout<<setw(7)<<left<<"Не сдан"<< "|";}
    cout<<setw(5)<<left<<""<<setw(7)<<left<<(tmp->student.middleMark)<< "|";
    if(tmp->student.examStatus)
    {
        cout<<setw(6)<<left<<""<<setw(7)<<left<<(tmp->student.examMark) << "|"<<endl;
    }
    else
    {
        cout<<setw(3)<<left<<""<<setw(10)<<left<<"Не сдан" << "|"<<endl;
    }
    PrintPodcher(k,namel,surnamel,false);
}