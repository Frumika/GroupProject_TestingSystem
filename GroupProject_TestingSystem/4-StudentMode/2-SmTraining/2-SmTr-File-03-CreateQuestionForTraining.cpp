#include <iostream>
#include <conio.h>
#include <list>
#include <windows.h>
#include <string.h>
#include <cstdlib>

#include "../0-SmCommon/0-SmCo-File-01-Header.h"
#include "2-SmTr-File-01-Header.h"

using namespace std;

void createQuestionForTraining(int start_num)
{
    int q = 1; // номер задания на экране ( от 0 до 10)
    int input_by_user; // юзер вводит ответ
    int ans_by_user = 0;
    bool condition; 

    Student student;
    QList *myList = createQList();
    
    for (int i = 0 ; i <= 80; i++)
    {
        if (i >= start_num && i < start_num+10)
        {
            do
            {
                cout << "   Тема: " << myList->head->question.topic << endl;
                cout << q << "." << myList->head->question.question << endl
                     << "|--------------------------------------------------|" << endl
                     << "1." << myList->head->question.answer_1 << endl
                     << "2." << myList->head->question.answer_2 << endl
                     << "3." << myList->head->question.answer_3 << endl
                     << "4." << myList->head->question.answer_4 << endl
                     << "|--------------------------------------------------|" << endl;

                do
                {
                    input_by_user = _getch();
                
                    condition = (input_by_user == '1' || input_by_user == '2' ||
                                 input_by_user == '3' || input_by_user == '4');
                }
                while (condition == false);
                
                ans_by_user = atoi(reinterpret_cast<char*>(&input_by_user)); // преобразование ASCII в integer
                
                if (ans_by_user == myList->head->question.rightAnswerId)
                {
                    cout << "|--------------------------------------------------|" << endl;
                    cout << "|" << myList->head->question.rightAnswerId << " - Правильный ответ                              |" << endl
                         << "|--------------------------------------------------|" << endl;
                    myList->head = myList->head->next;
                    q++;
                    
                    if (q==11)
                    {
                        cout << "Нажмите любую клавишу, чтобы продолжить" << endl;
                        _getch();

                        deleteQList(*myList);
                        runStudentMenu(student);
                    }
                    break;
                }
                
                if (ans_by_user != myList->head->question.rightAnswerId)
                {
                    cout << "|--------------------------------------------------|" << endl;
                    cout << "|" << ans_by_user << " - Неправильный ответ                            |" << endl                
                         << "|--------------------------------------------------|" << endl;
                }
            }
            while (ans_by_user != myList->head->question.rightAnswerId);
        }
        
        else
        {
            myList->head = myList->head->next;
        }
    }
}

