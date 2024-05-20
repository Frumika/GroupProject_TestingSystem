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
            << "|                 >>> ����� <<<                    |\n"
            << "|--------------------------------------------------|\n"
            << "| 1. �������� ������                               |\n"
            << "| 2. �������� ������                               |\n"
            << "| 3. ������� ������                                |\n"
            << "| 0. �����                                         |\n"
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
