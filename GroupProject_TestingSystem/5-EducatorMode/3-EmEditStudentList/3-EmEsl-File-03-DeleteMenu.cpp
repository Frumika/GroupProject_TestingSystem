#include "3-EmEsl-File-01-Header.h"
#include <iostream>
#include <conio.h>

using namespace std;


/*
 * 
 */
void runMenuOfDeleteStudent()
{
    SList* list = createSList();
    
    if (list->head != nullptr)
    {
        int condition = deleteStudentByLogin(*list);

        if (condition == 1)
        {
            _editSList(*list);
            
            cout
                << "|--------------------------------------------------|" << endl
                << "|                 ������� �����                   |" << endl
                << "|--------------------------------------------------|" << endl
                << "|      ��� ����������� ������� ����� �������       |" << endl
                << "|--------------------------------------------------|" << endl;
            _getch();
        }
    }

    else
    {
        cout
            << "|--------------------------------------------------|" << endl
            << "|     ��������� ���. ������� �������� ��������.    |" << endl
            << "|--------------------------------------------------|" << endl
            << "|      ��� ����������� ������� ����� �������       |" << endl
            << "|--------------------------------------------------|" << endl;
        _getch();
    }

    deleteSList(*list);
}
