#include <iostream>
#include <conio.h>
#include <list>
#include <windows.h>

#include "4-Sm-File-01-Header.h"

using namespace std;

void runTrainingOnTheTopic()
{
    QList *myList = createQList();
    
    int SelectedTopic;
    bool condition;
    system("cls");
    
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
                cout << myList->head->question.answer_1 << endl;
                
                break;
            }
        case '2':
            {
                cout << "2" << endl;
                break;
            }
        case '3':
            {
                cout << "3" << endl;
                break;
            }
        case '4':
            {
                
            }
        case '5':
            {
                
            }
        case '6':
            {
                
            }
        case '7':
            {
                
            }
        case '8':
            {
                
            }
        default: break;
        }
    

    //cout << "Нажмите любую клавишу для выхода в меню" << endl;
    //_getch();
}