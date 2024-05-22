#include <iostream>
#include <conio.h>
#include <windows.h>

#include "4-Sm-File-01-Header.h"

using namespace std;

void runStudentPasswordCheck()
{
    char* password = nullptr;
    
    bool isPasswordTrue = true;
    
    bool exit;
    int condition;

    do
    {
        password = (char*)malloc(sizeof(char) * 1);
        password[0] = '\0';
        do
        {
            system("cls");

            cout
                << "|--------------------------------------------------|" << endl
                << "|               >>> Авторизация <<<                |" << endl
                << "|--------------------------------------------------|" << endl
                << "| Пароль: ";

            if (password[0] == '\0' && isPasswordTrue == true)
            {
                cout << "Введите пароль" << endl;
            }

            else if (password[0] == '\0' && isPasswordTrue == false)
            {
                cout << "Пароль неверный. Введите пароль заново" << endl;
            }

            else puts(password);

            cout
                << "|--------------------------------------------------|" << endl
                << "|   Для возвращения обратно в меню нажмите SPACE   |" << endl
                << "|--------------------------------------------------|" << endl
                << "|     Для удаления значения нажмите BACKSPACE      |" << endl
                << "|--------------------------------------------------|" << endl
                << "|       Для прекращения ввода нажмите ENTER        |" << endl
                << "|--------------------------------------------------|" << endl;

            condition = enterSymbol(password);
        }
        while (condition > -1);

        if (condition == -1) isPasswordTrue = compareStrings(password, EDUCATOR_PASSWORD);
        
        free(password);

        exit = ((isPasswordTrue == true) || (condition == -2));
    }
    while (exit == false);

    /*
     * Если кодом действия оказалась (-1 - Верный ввод пароля) то вызывается следующее меню
     * Иначе завершается выполнение этой функции и мы откатываемся к предыдущей, тем самым очищая стек
     */
    if (condition == -1) runStudentOptionsMenu();
}