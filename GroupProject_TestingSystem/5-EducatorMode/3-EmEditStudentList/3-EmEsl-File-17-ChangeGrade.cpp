#include "3-EmEsl-File-01-Header.h"
#include <iostream>
#include <conio.h>

using namespace std;


/*
 * 
 */
int enterGrade()
{
    int grade;
    bool condition;

    do
    {
        cout << "| Введите оценку: ";
        cin >> grade;

        condition = (1 <= grade && grade <= 5);
        if (condition == false) cout << "| Ошибка: Недействительная оценка" << endl;
    }
    while (condition == false);

    return grade;
}

void changeMidleGrade(SNode& node)
{
    int count = 0;
    int sum = 0;
    double middleMark = 0;

    for (int i = 0; i < 8; i++)
    {
        if (node.student.marks[i] != 0)
        {
            sum += node.student.marks[i];
            count++;
        }
    }

    if (count != 0) middleMark = double(sum) / count;
    node.student.middleMark = middleMark;
}

void enterStatus(SNode& node)
{
    if (node.student.examStatus == false) node.student.examStatus = true;
    else node.student.examStatus = false;
}


void changeGradeForTopic(SList& list, SNode& node, int index)
{
    cout << "| Текущаяя оценка: ";
    if (node.student.marks[index] == 0) cout << "Нет оценки" << endl;
    else cout << node.student.marks[index] << endl;
    cout << "|--------------------------------------------------|" << endl;

    node.student.marks[index] = enterGrade();
    changeMidleGrade(node);

    _editSList(list);

    cout
        << "|--------------------------------------------------|" << endl
        << "| Оценка изменена. Нажмите клавишу для продолжения |" << endl
        << "|--------------------------------------------------|" << endl;
    _getch();
}


void changeGradeForExam(SList list, SNode& node)
{
    cout << "| Текущаяя оценка: ";
    if (node.student.examMark == 0) cout << "Нет оценки" << endl;
    else cout << node.student.examMark << endl;
    cout << "|--------------------------------------------------|" << endl;

    node.student.examMark = enterGrade();

    _editSList(list);

    cout
        << "|--------------------------------------------------|" << endl
        << "| Оценка изменена. Нажмите клавишу для продолжения |" << endl
        << "|--------------------------------------------------|" << endl;
    _getch();
}

void changeStatusOfExam(SList list, SNode& node)
{
    enterStatus(node);

    cout << "| Новый статус: ";
    if (node.student.examStatus == false) cout << "Не сдавал экзамен" << endl;
    else cout << "Сдал экзамен" << endl;

    _editSList(list);

    cout
        << "|--------------------------------------------------|" << endl
        << "|  Статус изменён. Нажмите клавишу для продолжения |" << endl
        << "|--------------------------------------------------|" << endl;
    _getch();
}
