#include <conio.h>
#include <ratio>
#include <set>

#include "4-SmEx-File-01-Header.h"


/*
 * Функция принимает ссылку на авторизованного студента.
 * Студент не имеет связи со списком студентов. При необходимости список надо создать самому.
 * Найти студента в созданном списке можно при помощи findSNodeById.
 */
void runExamMode(Student& student)
{
    student.id = 1;
    student.examMark = 0;
    student.examStatus = 0;

    QList* QuestionList = createQList();

    char button;
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

    SList *StudentList = createSList();

    SNode *AuthorizedStudent = findSNodeById(*StudentList, student.id);

    AuthorizedStudent->student.examMark = mark;
    AuthorizedStudent->student.examStatus = 1;

    _editSList(*StudentList);
    
    std::cout
    << "|--------------------------------------------------|\n"
    << "|  >>> ��� ����������� ������� ����� ������� <<<   |\n"
    << "|--------------------------------------------------|\n";

    button = _getch();
}