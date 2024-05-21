#include <conio.h>
#include <ratio>
#include <set>

#include "4-SmEx-File-01-Header.h"


/*
 * ������� ��������� ������ �� ��������������� ��������.
 * ������� �� ����� ����� �� ������� ���������. ��� ������������� ������ ���� ������� ������.
 * ����� �������� � ��������� ������ ����� ��� ������ findSNodeById.
 */
void runExamMode(Student& student)
{
    char button;
    
    if (student.examStatus == 1)
    {
        system("cls");
        
        std::cout
            << "|--------------------------------------------------|\n"
            << "| ��������� ����� ��������� ����� ����������.      |\n"
               "| �� ������ ���������� � �������������.            |\n"
            << "|--------------------------------------------------|\n"
            << "|--------------------------------------------------|\n"
            << "|  >>> ��� ����������� ������� ����� ������� <<<   |\n"
            << "|--------------------------------------------------|\n";

        button = _getch();
        return;
    }

    QList* QuestionList = createQList();

    int mistakes = 0;

    std::vector<Question> examQuestions = createExamQuestions(*QuestionList);
    std::vector<Question> wrongQuestions;

    for (int i = 0; i < 20; i++)
    {
        system("cls");

        printQText(examQuestions[i]);
        printAnsOptions(examQuestions[i]);

        std::cout << "| ��� �����: ";

        button = _getch();

        if (int(button - '0') != examQuestions[i].rightAnswerId)
        {
            mistakes++;
            wrongQuestions.push_back(examQuestions[i]);
        }
    }


    int mark;

    if (mistakes <= 4) mark = 5;
    else if (mistakes <= 8) mark = 4;
    else if (mistakes <= 10) mark = 3;
    else mark = 2;

    printResult(mistakes, wrongQuestions, mark);

    SList* StudentList = createSList();

    SNode* AuthorizedStudent = findSNodeById(*StudentList, student.id);

    student.examMark = mark;
    student.examStatus = 1;
    
    AuthorizedStudent->student.examMark = mark;
    AuthorizedStudent->student.examStatus = 1;

    _editSList(*StudentList);

    std::cout
        << "|--------------------------------------------------|\n"
        << "|  >>> ��� ����������� ������� ����� ������� <<<   |\n"
        << "|--------------------------------------------------|\n";

    button = _getch();
}
