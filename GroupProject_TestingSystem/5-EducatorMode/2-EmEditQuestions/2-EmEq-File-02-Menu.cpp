#include <Windows.h>

#include "2-EmEq-File-01-Header.h"

void runEditQuestionsMenu()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    char button;
    bool condition;

    do
    {
        system("cls");

        std::cout
            << "|--------------------------------------------------|\n"
            << "|                 >>> Опции <<<                    |\n"
            << "|--------------------------------------------------|\n"
            << "| 1. Добавить вопрос                               |\n"
            << "| 2. Изменить вопрос                               |\n"
            << "| 3. Удалить вопрос                                |\n"
            << "| 0. Назад                                         |\n"
            << "|--------------------------------------------------|\n";

        do
        {
            button = _getch();
            condition = (button == '1' || button == '2' || button == '3' || button == '0');
        }
        while (condition == false);

        system("cls");
        
        switch (button)
        {
        case '1':
            {
                runAddQ();
            }
            break;
        case '2':
            {
                runEditQMenu2();
            }
            break;
        case '3':
            {
                runDelQMenu();
            }
            break;
        }
    }
    while (button != '0');
}
