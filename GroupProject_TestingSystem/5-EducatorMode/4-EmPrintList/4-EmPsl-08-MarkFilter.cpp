
#include "4-EmPsl-01-Header.h"
#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
int Filter()
{
    char button;
    bool condition;
    system("cls");
    cout
           << "|--------------------------------------------------|" << endl
           << "|          >>> ����� ������ ��������� <<<          |" << endl
           << "|--------------------------------------------------|" << endl
           << "| 1. ������� ������ ��� ����������                 |" << endl
           << "| 2. ������� ������ � ������� 2                    |" << endl
           << "| 3. ������� ������ � ������� 3                    |" << endl
           << "| 4. ������� ������ � ������� 4                    |" << endl
           << "| 5. ������� ������ � ������� 5                    |" << endl
           << "| 6. ������� ������ � ���������� �������           |" << endl
           << "|--------------------------------------------------|" << endl;
    do
    {
        button = _getch();
        condition = (button == '1' || button == '2' || button == '3' || button == '4' || button == '5'|| button == '6' );
    }
    while (condition == false);
    switch (button)
    {
    case '1': {return 6; }
        break;
    case '2': { return 2; }
        break;
    case '3': {return 3; }
        break;
    case '4': {return 4; }
        break;
    case '5': {return 5; }
        break;
    case '6': {return 0; }
        break;
    }
    system("pause");
    return 300;
}