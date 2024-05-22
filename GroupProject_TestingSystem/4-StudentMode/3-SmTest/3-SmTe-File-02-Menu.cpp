#include "3-SmTe-File-01-Header.h"


/*
 * Функция принимает ссылку на авторизованного студента.
 * Студент не имеет связи со списком студентов. При необходимости список надо создать самому.
 * Найти студента в созданном списке можно при помощи findSNodeById.
 */
void runTestMode(Student& student)
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
  
    switch (button)
    {
    case '1':{runTest(student,"Циклы",1);}break;
    case '2':{runTest(student,"Массивы",2);}break;
    case '3':{runTest(student,"Строки",3);}break;
    case '4':{runTest(student,"Рекурсия",4);}break;
    case '5':{runTest(student,"Структуры",5);}break;
    case '6':{runTest(student,"Файлы",6);}break;
    case '7':{runTest(student,"Адреса и указатели",7);}break;
    case '8':{runTest(student,"Динамическая память",8);}break;
    }
}
void runTest(Student& student,string theme,int themenum)
{
    char button;
    bool condition;
    QList* QuestionList = createQList();

    int mistakes = 0;

    std::vector<Question> Questions = createQuestions(*QuestionList,"Циклы");
    std::vector<Question> wrongQuestions;

    for (int i = 0; i < 10; i++)
    {
        system("cls");
        printQText1(Questions[i],i+1);
        printAnsOptions1(Questions[i]);

        std::cout << "| Ваш ответ: ";
        do
        {
            button = _getch();
            condition = (button == '1' || button == '2' || button == '3' || button == '4');
        }
        while (condition == false);

        if (int(button - '0') != Questions[i].rightAnswerId)
        {
            mistakes++;
            wrongQuestions.push_back(Questions[i]);
        }
    }


    int mark;

    if (mistakes <= 2) mark = 5;
    else if (mistakes <= 4) mark = 4;
    else if (mistakes <= 5) mark = 3;
    else mark = 2;

    printResult1(mistakes, wrongQuestions, mark);

    SList* StudentList = createSList();

    SNode* AuthorizedStudent = findSNodeById(*StudentList, student.id);

    student.marks[themenum-1] = mark;
    
    AuthorizedStudent->student.marks[themenum-1] = mark;

    _editSList(*StudentList);

    std::cout
        << "|--------------------------------------------------|\n"
        << "|  >>> Для продолжения нажмите любую клавишу <<<   |\n"
        << "|--------------------------------------------------|\n";

    button = _getch();
}
