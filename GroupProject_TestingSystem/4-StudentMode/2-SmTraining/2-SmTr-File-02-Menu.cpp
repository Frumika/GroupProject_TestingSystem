#include <iostream>
#include <conio.h>
#include <list>
#include <windows.h>

#include "2-SmTr-File-01-Header.h"

using namespace std;
/*
 * Функция принимает ссылку на авторизованного студента.
 * Студент не имеет связи со списком студентов. При необходимости список надо создать самому.
 * Найти студента в созданном списке можно при помощи findSNodeById.
 */
void runTrainingMode(Student& student)
{
    
    int SelectedTopic;
    bool condition;
    //system("cls");
    
        cout
            << "|--------------------------------------------------|" << endl
            << "|              >>> Выберите тему <<<               |" << endl
            << "|--------------------------------------------------|" << endl
            << "| 1. Циклы                                         |" << endl
            << "| 2. Массивы                                       |" << endl
            << "| 3. Строки                                        |" << endl
            << "| 4. Рекурсия                                      |" << endl
            << "| 5. Структуры                                     |" << endl
            << "| 6. Файлы                                         |" << endl
            << "| 7. Адреса и указатели                            |" << endl
            << "| 8. Динамическая память                           |" << endl
            << "| 0. Выйти                                         |" << endl
            << "|--------------------------------------------------|" << endl;

        do
        {
            SelectedTopic = _getch();
        
            condition =(SelectedTopic == '1' || SelectedTopic == '2' ||
                        SelectedTopic == '3' || SelectedTopic == '4' ||
                        SelectedTopic == '5' || SelectedTopic == '6' ||
                        SelectedTopic == '7' || SelectedTopic == '8' ||
                        SelectedTopic == '0');
        }           
        while (condition == false);

        switch(SelectedTopic)
        {
        case '1':
            {
                createQuestionForTraining(0);
                break;
            }
        case '2':
            {
                createQuestionForTraining(10);
                break;
            }
        case '3':
            {
                createQuestionForTraining(20);
                break;
            }
        case '4':
            {
                createQuestionForTraining(30);
            }
        case '5':
            {
                createQuestionForTraining(40);
            }
        case '6':
            {
                createQuestionForTraining(50);
            }
        case '7':
            {
                createQuestionForTraining(60);
            }
        case '8':
            {
                createQuestionForTraining(70);
            }
        default: break;
        }
    

    cout << "Нажмите любую клавишу для выхода в меню" << endl;
    _getch();
}
