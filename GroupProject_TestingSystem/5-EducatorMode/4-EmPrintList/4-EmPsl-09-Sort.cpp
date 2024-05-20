#include "4-EmPsl-01-Header.h"
#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

void SortMenuForOneTest(SList list,int num)
{
    char button;
    bool condition;
    system("cls");
    cout
           << "|--------------------------------------------------|" << endl
           << "|          >>> Вывод списка студентов <<<          |" << endl
           << "|--------------------------------------------------|" << endl
           << "| 1. Без сортировки(по возрастанию ID)             |" << endl
           << "| 2. Сортировка по убыванию ID                     |" << endl
           << "| 3. Сортировка по возрастанию оценки за тест      |" << endl
           << "| 4. Сортировка по убыванию оценки за тест         |" << endl
           << "| 5. Сортировка в прямом алфавитном порядке        |" << endl
           << "| 6. Сортировка в обратном алфавитном порядке      |" << endl
           << "|--------------------------------------------------|" << endl;
    do
    {
        button = _getch();
        condition = (button == '1' || button == '2' || button == '3' || button == '4'|| button == '5' || button == '6');
    }
    while (condition == false);
    switch (button)
    {
    case '1': {SortByIdV(list); }
        break;
    case '2': {SortByIdU(list); }
        break;
    case '3': {SortByTestMarkV(list,num); }
        break;
    case '4': {SortByTestMarkU(list,num);}
        break;
    case '5': {SortBySurnameV(list);}
        break;
    case '6': {SortBySurnameU(list);}
        break;
    }
}
void SortMenuForEx(SList list)
{
    char button;
    bool condition;
    system("cls");
    cout
           << "|--------------------------------------------------|" << endl
           << "|          >>> Вывод списка студентов <<<          |" << endl
           << "|--------------------------------------------------|" << endl
           << "| 1. Без сортировки(по возрастанию ID)             |" << endl
           << "| 2. Сортировка по убыванию ID                     |" << endl
           << "| 3. Сортировка по возрастанию оценки за экзамен   |" << endl
           << "| 4. Сортировка по убыванию оценки за экзамен      |" << endl
           << "| 5. Сортировка в прямом алфавитном порядке        |" << endl
           << "| 6. Сортировка в обратном алфавитном порядке      |" << endl
           << "|--------------------------------------------------|" << endl;
    do
    {
        button = _getch();
        condition = (button == '1' || button == '2' || button == '3' || button == '4'|| button == '5' || button == '6');
    }
    while (condition == false);
    switch (button)
    {
    case '1': {SortByIdV(list); }
        break;
    case '2': {SortByIdU(list); }
        break;
    case '3': {SortByExMarkV(list); }
        break;
    case '4': {SortByMidMarkU(list);}
        break;
    case '5': {SortBySurnameV(list);}
        break;
    case '6': {SortBySurnameU(list);}
        break;
    }
}
void SortMenuForMid(SList list)
{
    char button;
    bool condition;
    system("cls");
    cout
           << "|--------------------------------------------------|" << endl
           << "|          >>> Вывод списка студентов <<<          |" << endl
           << "|--------------------------------------------------|" << endl
           << "| 1. Без сортировки(по возрастанию ID)             |" << endl
           << "| 2. Сортировка по убыванию ID                     |" << endl
           << "| 3. Сортировка по возрастанию среднего балла      |" << endl
           << "| 4. Сортировка по убыванию среднего балла         |" << endl
           << "| 5. Сортировка в прямом алфавитном порядке        |" << endl
           << "| 6. Сортировка в обратном алфавитном порядке      |" << endl
           << "|--------------------------------------------------|" << endl;
    do
    {
        button = _getch();
        condition = (button == '1' || button == '2' || button == '3' || button == '4'|| button == '5' || button == '6');
    }
    while (condition == false);
    switch (button)
    {
    case '1': {SortByIdV(list); }
        break;
    case '2': {SortByIdU(list); }
        break;
    case '3': {SortByMidMarkV(list);}
        break;
    case '4': {SortByMidMarkU(list); }
        break;
    case '5': {SortBySurnameV(list);}
        break;
    case '6': {SortBySurnameU(list);}
        break;
    }
}
void SortMenu(SList list)
{
    char button;
    bool condition;
    system("cls");
    cout
           << "|--------------------------------------------------|" << endl
           << "|          >>> Вывод списка студентов <<<          |" << endl
           << "|--------------------------------------------------|" << endl
           << "| 1. Без сортировки(по возрастанию ID)             |" << endl
           << "| 2. Сортировка по убыванию ID                     |" << endl
           << "| 3. Сортировка по возрастанию среднего балла      |" << endl
           << "| 4. Сортировка по убыванию среднего балла         |" << endl
           << "| 5. Сортировка по возрастанию оценки за экзамен   |" << endl
           << "| 6. Сортировка по убыванию оценки за экзамен      |" << endl
           << "| 7. Сортировка в прямом алфавитном порядке        |" << endl
           << "| 8. Сортировка в обратном алфавитном порядке      |" << endl
           << "|--------------------------------------------------|" << endl;
    do
    {
        button = _getch();
        condition = (button == '1' || button == '2' || button == '3' || button == '4'|| button == '5' || button == '6' || button == '7'|| button == '8');
    }
    while (condition == false);
    switch (button)
    {
    case '1': {SortByIdV(list); }
        break;
    case '2': {SortByIdU(list); }
        break;
    case '3': {SortByMidMarkV(list);}
        break;
    case '4': {SortByMidMarkU(list); }
        break;
    case '5': {SortByExMarkV(list); }
        break;
    case '6': {SortByMidMarkU(list);}
        break;
    case '7': {SortBySurnameV(list);}
        break;
    case '8': {SortBySurnameU(list);}
        break;
    }
}
void SortByIdV(SList list)
{
    SNode* p = list.head;
    int id;
    std::string login;
    std::string password;
    std::string name;
    std::string surname;
    double middleMark; 
    int examMark;
    bool examStatus;
    int mark0;
    int mark1;
    int mark2;
    int mark3;
    int mark4;
    int mark5;
    int mark6;
    int mark7;
    for (SNode* i = p; i != NULL && i->next != NULL; i = i->next)
    {
        for (SNode* j = p; j->next!= NULL; j = j->next)
        {
            if (j->next->student.id <j->student.id)
            {
                id = j->next->student.id;
                login=j->next->student.login;
                password=j->next->student.password;
                name=j->next->student.name;
                surname=j->next->student.surname;
                middleMark=j->next->student.middleMark;
                examMark=j->next->student.examMark;
                examStatus=j->next->student.examStatus;
                mark0=j->next->student.marks[0];
                mark1=j->next->student.marks[1];
                mark2=j->next->student.marks[2];
                mark3=j->next->student.marks[3];
                mark4=j->next->student.marks[4];
                mark5=j->next->student.marks[5];
                mark6=j->next->student.marks[6];
                mark7=j->next->student.marks[7];


                
                j->next->student.id = j->student.id;
                j->next->student.login= j->student.login;
                j->next->student.password= j->student.password;
                j->next->student.name= j->student.name;
                j->next->student.surname= j->student.surname;
                j->next->student.middleMark= j->student.middleMark;
                j->next->student.examMark= j->student.examMark;
                j->next->student.examStatus= j->student.examStatus;
                j->next->student.marks[0]= j->student.marks[0];
                j->next->student.marks[1]= j->student.marks[1];
                j->next->student.marks[2]= j->student.marks[2];
                j->next->student.marks[3]= j->student.marks[3];
                j->next->student.marks[4]= j->student.marks[4];
                j->next->student.marks[5]= j->student.marks[5];
                j->next->student.marks[6]= j->student.marks[6];
                j->next->student.marks[7]= j->student.marks[7];
                
                j->student.id = id;
                j->student.login=login;
                j->student.password=password;
                j->student.name=name;
                j->student.surname=surname;
                j->student.examMark=examMark;
                j->student.examStatus=examStatus;
                j->student.middleMark=middleMark;
                j->student.marks[0]=mark0;
                j->student.marks[1]=mark1;
                j->student.marks[2]=mark2;
                j->student.marks[3]=mark3;
                j->student.marks[4]=mark4;
                j->student.marks[5]=mark5;
                j->student.marks[6]=mark6;
                j->student.marks[7]=mark7;
            }
        }
    }
}
void SortByIdU(SList list)
{
    SNode* p = list.head;
    int id;
    std::string login;
    std::string password;
    std::string name;
    std::string surname;
    double middleMark; 
    int examMark;
    bool examStatus;
    int mark0;
    int mark1;
    int mark2;
    int mark3;
    int mark4;
    int mark5;
    int mark6;
    int mark7;
    for (SNode* i = p; i != NULL && i->next != NULL; i = i->next)
    {
        for (SNode* j = p; j->next!= NULL; j = j->next)
        {
            if (j->next->student.id >j->student.id)
            {
                id = j->next->student.id;
                login=j->next->student.login;
                password=j->next->student.password;
                name=j->next->student.name;
                surname=j->next->student.surname;
                middleMark=j->next->student.middleMark;
                examMark=j->next->student.examMark;
                examStatus=j->next->student.examStatus;
                mark0=j->next->student.marks[0];
                mark1=j->next->student.marks[1];
                mark2=j->next->student.marks[2];
                mark3=j->next->student.marks[3];
                mark4=j->next->student.marks[4];
                mark5=j->next->student.marks[5];
                mark6=j->next->student.marks[6];
                mark7=j->next->student.marks[7];


                
                j->next->student.id = j->student.id;
                j->next->student.login= j->student.login;
                j->next->student.password= j->student.password;
                j->next->student.name= j->student.name;
                j->next->student.surname= j->student.surname;
                j->next->student.middleMark= j->student.middleMark;
                j->next->student.examMark= j->student.examMark;
                j->next->student.examStatus= j->student.examStatus;
                j->next->student.marks[0]= j->student.marks[0];
                j->next->student.marks[1]= j->student.marks[1];
                j->next->student.marks[2]= j->student.marks[2];
                j->next->student.marks[3]= j->student.marks[3];
                j->next->student.marks[4]= j->student.marks[4];
                j->next->student.marks[5]= j->student.marks[5];
                j->next->student.marks[6]= j->student.marks[6];
                j->next->student.marks[7]= j->student.marks[7];
                
                j->student.id = id;
                j->student.login=login;
                j->student.password=password;
                j->student.name=name;
                j->student.surname=surname;
                j->student.examMark=examMark;
                j->student.examStatus=examStatus;
                j->student.middleMark=middleMark;
                j->student.marks[0]=mark0;
                j->student.marks[1]=mark1;
                j->student.marks[2]=mark2;
                j->student.marks[3]=mark3;
                j->student.marks[4]=mark4;
                j->student.marks[5]=mark5;
                j->student.marks[6]=mark6;
                j->student.marks[7]=mark7;
            }
        }
    }
}
void SortByMidMarkV(SList list)
{
    SNode* p = list.head;
    int id;
    std::string login;
    std::string password;
    std::string name;
    std::string surname;
    double middleMark; 
    int examMark;
    bool examStatus;
    int mark0;
    int mark1;
    int mark2;
    int mark3;
    int mark4;
    int mark5;
    int mark6;
    int mark7;
    for (SNode* i = p; i != NULL && i->next != NULL; i = i->next)
    {
        for (SNode* j = p; j->next!= NULL; j = j->next)
        {
            if (j->next->student.middleMark <j->student.middleMark)
            {
                id = j->next->student.id;
                login=j->next->student.login;
                password=j->next->student.password;
                name=j->next->student.name;
                surname=j->next->student.surname;
                middleMark=j->next->student.middleMark;
                examMark=j->next->student.examMark;
                examStatus=j->next->student.examStatus;
                mark0=j->next->student.marks[0];
                mark1=j->next->student.marks[1];
                mark2=j->next->student.marks[2];
                mark3=j->next->student.marks[3];
                mark4=j->next->student.marks[4];
                mark5=j->next->student.marks[5];
                mark6=j->next->student.marks[6];
                mark7=j->next->student.marks[7];


                
                j->next->student.id = j->student.id;
                j->next->student.login= j->student.login;
                j->next->student.password= j->student.password;
                j->next->student.name= j->student.name;
                j->next->student.surname= j->student.surname;
                j->next->student.middleMark= j->student.middleMark;
                j->next->student.examMark= j->student.examMark;
                j->next->student.examStatus= j->student.examStatus;
                j->next->student.marks[0]= j->student.marks[0];
                j->next->student.marks[1]= j->student.marks[1];
                j->next->student.marks[2]= j->student.marks[2];
                j->next->student.marks[3]= j->student.marks[3];
                j->next->student.marks[4]= j->student.marks[4];
                j->next->student.marks[5]= j->student.marks[5];
                j->next->student.marks[6]= j->student.marks[6];
                j->next->student.marks[7]= j->student.marks[7];
                
                j->student.id = id;
                j->student.login=login;
                j->student.password=password;
                j->student.name=name;
                j->student.surname=surname;
                j->student.examMark=examMark;
                j->student.examStatus=examStatus;
                j->student.middleMark=middleMark;
                j->student.marks[0]=mark0;
                j->student.marks[1]=mark1;
                j->student.marks[2]=mark2;
                j->student.marks[3]=mark3;
                j->student.marks[4]=mark4;
                j->student.marks[5]=mark5;
                j->student.marks[6]=mark6;
                j->student.marks[7]=mark7;
            }
        }
    }
}
void SortByMidMarkU(SList list)
{
    SNode* p = list.head;
    int id;
    std::string login;
    std::string password;
    std::string name;
    std::string surname;
    double middleMark; 
    int examMark;
    bool examStatus;
    int mark0;
    int mark1;
    int mark2;
    int mark3;
    int mark4;
    int mark5;
    int mark6;
    int mark7;
    for (SNode* i = p; i != NULL && i->next != NULL; i = i->next)
    {
        for (SNode* j = p; j->next!= NULL; j = j->next)
        {
            if (j->next->student.id >j->student.id)
            {
                id = j->next->student.id;
                login=j->next->student.login;
                password=j->next->student.password;
                name=j->next->student.name;
                surname=j->next->student.surname;
                middleMark=j->next->student.middleMark;
                examMark=j->next->student.examMark;
                examStatus=j->next->student.examStatus;
                mark0=j->next->student.marks[0];
                mark1=j->next->student.marks[1];
                mark2=j->next->student.marks[2];
                mark3=j->next->student.marks[3];
                mark4=j->next->student.marks[4];
                mark5=j->next->student.marks[5];
                mark6=j->next->student.marks[6];
                mark7=j->next->student.marks[7];


                
                j->next->student.id = j->student.id;
                j->next->student.login= j->student.login;
                j->next->student.password= j->student.password;
                j->next->student.name= j->student.name;
                j->next->student.surname= j->student.surname;
                j->next->student.middleMark= j->student.middleMark;
                j->next->student.examMark= j->student.examMark;
                j->next->student.examStatus= j->student.examStatus;
                j->next->student.marks[0]= j->student.marks[0];
                j->next->student.marks[1]= j->student.marks[1];
                j->next->student.marks[2]= j->student.marks[2];
                j->next->student.marks[3]= j->student.marks[3];
                j->next->student.marks[4]= j->student.marks[4];
                j->next->student.marks[5]= j->student.marks[5];
                j->next->student.marks[6]= j->student.marks[6];
                j->next->student.marks[7]= j->student.marks[7];
                
                j->student.id = id;
                j->student.login=login;
                j->student.password=password;
                j->student.name=name;
                j->student.surname=surname;
                j->student.examMark=examMark;
                j->student.examStatus=examStatus;
                j->student.middleMark=middleMark;
                j->student.marks[0]=mark0;
                j->student.marks[1]=mark1;
                j->student.marks[2]=mark2;
                j->student.marks[3]=mark3;
                j->student.marks[4]=mark4;
                j->student.marks[5]=mark5;
                j->student.marks[6]=mark6;
                j->student.marks[7]=mark7;
            }
        }
    }
}
void SortByExMarkV(SList list)
{
    SNode* p = list.head;
    int id;
    std::string login;
    std::string password;
    std::string name;
    std::string surname;
    double middleMark; 
    int examMark;
    bool examStatus;
    int mark0;
    int mark1;
    int mark2;
    int mark3;
    int mark4;
    int mark5;
    int mark6;
    int mark7;
    for (SNode* i = p; i != NULL && i->next != NULL; i = i->next)
    {
        for (SNode* j = p; j->next!= NULL; j = j->next)
        {
            if (j->next->student.id <j->student.id)
            {
                id = j->next->student.id;
                login=j->next->student.login;
                password=j->next->student.password;
                name=j->next->student.name;
                surname=j->next->student.surname;
                middleMark=j->next->student.middleMark;
                examMark=j->next->student.examMark;
                examStatus=j->next->student.examStatus;
                mark0=j->next->student.marks[0];
                mark1=j->next->student.marks[1];
                mark2=j->next->student.marks[2];
                mark3=j->next->student.marks[3];
                mark4=j->next->student.marks[4];
                mark5=j->next->student.marks[5];
                mark6=j->next->student.marks[6];
                mark7=j->next->student.marks[7];


                
                j->next->student.id = j->student.id;
                j->next->student.login= j->student.login;
                j->next->student.password= j->student.password;
                j->next->student.name= j->student.name;
                j->next->student.surname= j->student.surname;
                j->next->student.middleMark= j->student.middleMark;
                j->next->student.examMark= j->student.examMark;
                j->next->student.examStatus= j->student.examStatus;
                j->next->student.marks[0]= j->student.marks[0];
                j->next->student.marks[1]= j->student.marks[1];
                j->next->student.marks[2]= j->student.marks[2];
                j->next->student.marks[3]= j->student.marks[3];
                j->next->student.marks[4]= j->student.marks[4];
                j->next->student.marks[5]= j->student.marks[5];
                j->next->student.marks[6]= j->student.marks[6];
                j->next->student.marks[7]= j->student.marks[7];
                
                j->student.id = id;
                j->student.login=login;
                j->student.password=password;
                j->student.name=name;
                j->student.surname=surname;
                j->student.examMark=examMark;
                j->student.examStatus=examStatus;
                j->student.middleMark=middleMark;
                j->student.marks[0]=mark0;
                j->student.marks[1]=mark1;
                j->student.marks[2]=mark2;
                j->student.marks[3]=mark3;
                j->student.marks[4]=mark4;
                j->student.marks[5]=mark5;
                j->student.marks[6]=mark6;
                j->student.marks[7]=mark7;
            }
        }
    }
}
void SortByExMarkU(SList list)
{
    SNode* p = list.head;
    int id;
    std::string login;
    std::string password;
    std::string name;
    std::string surname;
    double middleMark; 
    int examMark;
    bool examStatus;
    int mark0;
    int mark1;
    int mark2;
    int mark3;
    int mark4;
    int mark5;
    int mark6;
    int mark7;
    for (SNode* i = p; i != NULL && i->next != NULL; i = i->next)
    {
        for (SNode* j = p; j->next!= NULL; j = j->next)
        {
            if (j->next->student.id >j->student.id)
            {
                id = j->next->student.id;
                login=j->next->student.login;
                password=j->next->student.password;
                name=j->next->student.name;
                surname=j->next->student.surname;
                middleMark=j->next->student.middleMark;
                examMark=j->next->student.examMark;
                examStatus=j->next->student.examStatus;
                mark0=j->next->student.marks[0];
                mark1=j->next->student.marks[1];
                mark2=j->next->student.marks[2];
                mark3=j->next->student.marks[3];
                mark4=j->next->student.marks[4];
                mark5=j->next->student.marks[5];
                mark6=j->next->student.marks[6];
                mark7=j->next->student.marks[7];


                
                j->next->student.id = j->student.id;
                j->next->student.login= j->student.login;
                j->next->student.password= j->student.password;
                j->next->student.name= j->student.name;
                j->next->student.surname= j->student.surname;
                j->next->student.middleMark= j->student.middleMark;
                j->next->student.examMark= j->student.examMark;
                j->next->student.examStatus= j->student.examStatus;
                j->next->student.marks[0]= j->student.marks[0];
                j->next->student.marks[1]= j->student.marks[1];
                j->next->student.marks[2]= j->student.marks[2];
                j->next->student.marks[3]= j->student.marks[3];
                j->next->student.marks[4]= j->student.marks[4];
                j->next->student.marks[5]= j->student.marks[5];
                j->next->student.marks[6]= j->student.marks[6];
                j->next->student.marks[7]= j->student.marks[7];
                
                j->student.id = id;
                j->student.login=login;
                j->student.password=password;
                j->student.name=name;
                j->student.surname=surname;
                j->student.examMark=examMark;
                j->student.examStatus=examStatus;
                j->student.middleMark=middleMark;
                j->student.marks[0]=mark0;
                j->student.marks[1]=mark1;
                j->student.marks[2]=mark2;
                j->student.marks[3]=mark3;
                j->student.marks[4]=mark4;
                j->student.marks[5]=mark5;
                j->student.marks[6]=mark6;
                j->student.marks[7]=mark7;
            }
        }
    }
}
void SortByTestMarkV(SList list,int num)
{
    SNode* p = list.head;
    int id;
    std::string login;
    std::string password;
    std::string name;
    std::string surname;
    double middleMark; 
    int examMark;
    bool examStatus;
    int mark0;
    int mark1;
    int mark2;
    int mark3;
    int mark4;
    int mark5;
    int mark6;
    int mark7;
    for (SNode* i = p; i != NULL && i->next != NULL; i = i->next)
    {
        for (SNode* j = p; j->next!= NULL; j = j->next)
        {
            if (j->next->student.marks[num] <j->student.marks[num])
            {
                id = j->next->student.id;
                login=j->next->student.login;
                password=j->next->student.password;
                name=j->next->student.name;
                surname=j->next->student.surname;
                middleMark=j->next->student.middleMark;
                examMark=j->next->student.examMark;
                examStatus=j->next->student.examStatus;
                mark0=j->next->student.marks[0];
                mark1=j->next->student.marks[1];
                mark2=j->next->student.marks[2];
                mark3=j->next->student.marks[3];
                mark4=j->next->student.marks[4];
                mark5=j->next->student.marks[5];
                mark6=j->next->student.marks[6];
                mark7=j->next->student.marks[7];


                
                j->next->student.id = j->student.id;
                j->next->student.login= j->student.login;
                j->next->student.password= j->student.password;
                j->next->student.name= j->student.name;
                j->next->student.surname= j->student.surname;
                j->next->student.middleMark= j->student.middleMark;
                j->next->student.examMark= j->student.examMark;
                j->next->student.examStatus= j->student.examStatus;
                j->next->student.marks[0]= j->student.marks[0];
                j->next->student.marks[1]= j->student.marks[1];
                j->next->student.marks[2]= j->student.marks[2];
                j->next->student.marks[3]= j->student.marks[3];
                j->next->student.marks[4]= j->student.marks[4];
                j->next->student.marks[5]= j->student.marks[5];
                j->next->student.marks[6]= j->student.marks[6];
                j->next->student.marks[7]= j->student.marks[7];
                
                j->student.id = id;
                j->student.login=login;
                j->student.password=password;
                j->student.name=name;
                j->student.surname=surname;
                j->student.examMark=examMark;
                j->student.examStatus=examStatus;
                j->student.middleMark=middleMark;
                j->student.marks[0]=mark0;
                j->student.marks[1]=mark1;
                j->student.marks[2]=mark2;
                j->student.marks[3]=mark3;
                j->student.marks[4]=mark4;
                j->student.marks[5]=mark5;
                j->student.marks[6]=mark6;
                j->student.marks[7]=mark7;
            }
        }
    }
}
void SortByTestMarkU(SList list,int num)
{
    SNode* p = list.head;
    int id;
    std::string login;
    std::string password;
    std::string name;
    std::string surname;
    double middleMark; 
    int examMark;
    bool examStatus;
    int mark0;
    int mark1;
    int mark2;
    int mark3;
    int mark4;
    int mark5;
    int mark6;
    int mark7;
    for (SNode* i = p; i != NULL && i->next != NULL; i = i->next)
    {
        for (SNode* j = p; j->next!= NULL; j = j->next)
        {
            if (j->next->student.marks[num] >j->student.marks[num])
            {
                id = j->next->student.id;
                login=j->next->student.login;
                password=j->next->student.password;
                name=j->next->student.name;
                surname=j->next->student.surname;
                middleMark=j->next->student.middleMark;
                examMark=j->next->student.examMark;
                examStatus=j->next->student.examStatus;
                mark0=j->next->student.marks[0];
                mark1=j->next->student.marks[1];
                mark2=j->next->student.marks[2];
                mark3=j->next->student.marks[3];
                mark4=j->next->student.marks[4];
                mark5=j->next->student.marks[5];
                mark6=j->next->student.marks[6];
                mark7=j->next->student.marks[7];


                
                j->next->student.id = j->student.id;
                j->next->student.login= j->student.login;
                j->next->student.password= j->student.password;
                j->next->student.name= j->student.name;
                j->next->student.surname= j->student.surname;
                j->next->student.middleMark= j->student.middleMark;
                j->next->student.examMark= j->student.examMark;
                j->next->student.examStatus= j->student.examStatus;
                j->next->student.marks[0]= j->student.marks[0];
                j->next->student.marks[1]= j->student.marks[1];
                j->next->student.marks[2]= j->student.marks[2];
                j->next->student.marks[3]= j->student.marks[3];
                j->next->student.marks[4]= j->student.marks[4];
                j->next->student.marks[5]= j->student.marks[5];
                j->next->student.marks[6]= j->student.marks[6];
                j->next->student.marks[7]= j->student.marks[7];
                
                j->student.id = id;
                j->student.login=login;
                j->student.password=password;
                j->student.name=name;
                j->student.surname=surname;
                j->student.examMark=examMark;
                j->student.examStatus=examStatus;
                j->student.middleMark=middleMark;
                j->student.marks[0]=mark0;
                j->student.marks[1]=mark1;
                j->student.marks[2]=mark2;
                j->student.marks[3]=mark3;
                j->student.marks[4]=mark4;
                j->student.marks[5]=mark5;
                j->student.marks[6]=mark6;
                j->student.marks[7]=mark7;
            }
        }
    }
}
void SortBySurnameU(SList list)
{
    SNode* p = list.head;
    int id;
    std::string login;
    std::string password;
    std::string name;
    std::string surname;
    double middleMark; 
    int examMark;
    bool examStatus;
    int mark0;
    int mark1;
    int mark2;
    int mark3;
    int mark4;
    int mark5;
    int mark6;
    int mark7;
    for (SNode* i = p; i != NULL && i->next != NULL; i = i->next)
    {
        for (SNode* j = p; j->next!= NULL; j = j->next)
        {
            if ((j->next->student.surname >j->student.surname)||(j->next->student.surname ==j->student.surname && (j->next->student.name >j->student.name)))
            {
                id = j->next->student.id;
                login=j->next->student.login;
                password=j->next->student.password;
                name=j->next->student.name;
                surname=j->next->student.surname;
                middleMark=j->next->student.middleMark;
                examMark=j->next->student.examMark;
                examStatus=j->next->student.examStatus;
                mark0=j->next->student.marks[0];
                mark1=j->next->student.marks[1];
                mark2=j->next->student.marks[2];
                mark3=j->next->student.marks[3];
                mark4=j->next->student.marks[4];
                mark5=j->next->student.marks[5];
                mark6=j->next->student.marks[6];
                mark7=j->next->student.marks[7];


                
                j->next->student.id = j->student.id;
                j->next->student.login= j->student.login;
                j->next->student.password= j->student.password;
                j->next->student.name= j->student.name;
                j->next->student.surname= j->student.surname;
                j->next->student.middleMark= j->student.middleMark;
                j->next->student.examMark= j->student.examMark;
                j->next->student.examStatus= j->student.examStatus;
                j->next->student.marks[0]= j->student.marks[0];
                j->next->student.marks[1]= j->student.marks[1];
                j->next->student.marks[2]= j->student.marks[2];
                j->next->student.marks[3]= j->student.marks[3];
                j->next->student.marks[4]= j->student.marks[4];
                j->next->student.marks[5]= j->student.marks[5];
                j->next->student.marks[6]= j->student.marks[6];
                j->next->student.marks[7]= j->student.marks[7];
                
                j->student.id = id;
                j->student.login=login;
                j->student.password=password;
                j->student.name=name;
                j->student.surname=surname;
                j->student.examMark=examMark;
                j->student.examStatus=examStatus;
                j->student.middleMark=middleMark;
                j->student.marks[0]=mark0;
                j->student.marks[1]=mark1;
                j->student.marks[2]=mark2;
                j->student.marks[3]=mark3;
                j->student.marks[4]=mark4;
                j->student.marks[5]=mark5;
                j->student.marks[6]=mark6;
                j->student.marks[7]=mark7;
            }
        }
    }
}
void SortBySurnameV(SList list)
{
    SNode* p = list.head;
    int id;
    std::string login;
    std::string password;
    std::string name;
    std::string surname;
    double middleMark; 
    int examMark;
    bool examStatus;
    int mark0;
    int mark1;
    int mark2;
    int mark3;
    int mark4;
    int mark5;
    int mark6;
    int mark7;
    for (SNode* i = p; i != NULL && i->next != NULL; i = i->next)
    {
        for (SNode* j = p; j->next!= NULL; j = j->next)
        {
            if ((j->next->student.surname <j->student.surname)||(j->next->student.surname ==j->student.surname && (j->next->student.name <j->student.name)))
            {
                id = j->next->student.id;
                login=j->next->student.login;
                password=j->next->student.password;
                name=j->next->student.name;
                surname=j->next->student.surname;
                middleMark=j->next->student.middleMark;
                examMark=j->next->student.examMark;
                examStatus=j->next->student.examStatus;
                mark0=j->next->student.marks[0];
                mark1=j->next->student.marks[1];
                mark2=j->next->student.marks[2];
                mark3=j->next->student.marks[3];
                mark4=j->next->student.marks[4];
                mark5=j->next->student.marks[5];
                mark6=j->next->student.marks[6];
                mark7=j->next->student.marks[7];


                
                j->next->student.id = j->student.id;
                j->next->student.login= j->student.login;
                j->next->student.password= j->student.password;
                j->next->student.name= j->student.name;
                j->next->student.surname= j->student.surname;
                j->next->student.middleMark= j->student.middleMark;
                j->next->student.examMark= j->student.examMark;
                j->next->student.examStatus= j->student.examStatus;
                j->next->student.marks[0]= j->student.marks[0];
                j->next->student.marks[1]= j->student.marks[1];
                j->next->student.marks[2]= j->student.marks[2];
                j->next->student.marks[3]= j->student.marks[3];
                j->next->student.marks[4]= j->student.marks[4];
                j->next->student.marks[5]= j->student.marks[5];
                j->next->student.marks[6]= j->student.marks[6];
                j->next->student.marks[7]= j->student.marks[7];
                
                j->student.id = id;
                j->student.login=login;
                j->student.password=password;
                j->student.name=name;
                j->student.surname=surname;
                j->student.examMark=examMark;
                j->student.examStatus=examStatus;
                j->student.middleMark=middleMark;
                j->student.marks[0]=mark0;
                j->student.marks[1]=mark1;
                j->student.marks[2]=mark2;
                j->student.marks[3]=mark3;
                j->student.marks[4]=mark4;
                j->student.marks[5]=mark5;
                j->student.marks[6]=mark6;
                j->student.marks[7]=mark7;
            }
        }
    }
}