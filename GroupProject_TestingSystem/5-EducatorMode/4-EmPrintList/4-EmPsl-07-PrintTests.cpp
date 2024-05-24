#include "4-EmPsl-01-Header.h"
#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
void PrintTests(SList list,int mark) {
    if (list.head == NULL) {
        cout << "Список пуст" << endl;
        return;
    }
    SNode *tmp=list.head;
    int namel=MaxLenName(list);
    int surnamel=MaxLenSurname(list);
    int k=namel+surnamel+(7*8)+13+2;
    bool fl=false;
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
    cout<<setw(7)<<left<<"Тест 8"<<"|"<<endl;
    int i=0;
    PrintPodcher(k,namel,surnamel,true);
    while (tmp->next != nullptr) {
        if((tmp->student.marks[0]==mark && tmp->student.marks[1]==mark &&tmp->student.marks[2]==mark && tmp->student.marks[3]==mark && tmp->student.marks[4]==mark && tmp->student.marks[5]==mark && tmp->student.marks[6]==mark && tmp->student.marks[7]==mark)|| mark==6)
        {
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
            if(tmp->student.marks[7]){cout<<setw(3)<<left<<""<<setw(4)<<left<<(tmp->student.marks[7])<< "|"<<endl;}
            else{cout<<setw(7)<<left<<"Не сдан"<< "|"<<endl;}
       fl=true;
            PrintPodcher(k,namel,surnamel,false);
        }
        tmp = tmp->next;
    }
    if((tmp->student.marks[0]==mark && tmp->student.marks[1]==mark &&tmp->student.marks[2]==mark && tmp->student.marks[3]==mark && tmp->student.marks[4]==mark && tmp->student.marks[5]==mark && tmp->student.marks[6]==mark && tmp->student.marks[7]==mark)|| mark==6)
    {
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
        if(tmp->student.marks[7]){cout<<setw(3)<<left<<""<<setw(4)<<left<<(tmp->student.marks[7])<< "|"<<endl;}
        else{cout<<setw(7)<<left<<"Не сдан"<< "|"<<endl;}
        fl=true;
        PrintPodcher(k,namel,surnamel,true);
    }
    if(fl==false){cout<<"|                          Нет студентов с оценкой "<<mark<<" по всем тестам                     |"<<endl;PrintPodcher(k,namel,surnamel,true);}
} 