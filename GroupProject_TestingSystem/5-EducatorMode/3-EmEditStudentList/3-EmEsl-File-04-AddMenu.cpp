#include "3-EmEsl-File-01-Header.h"
#include <iostream>
#include <conio.h>

using namespace std;


/*
 * 
 */
void runMenuOfAddOfStudent()
{
    SList* list = createSList();

    int isAdd = _addStudent(*list);

    if (isAdd == 1)
    {
        _editSList(*list);
        
        cout
            << "|--------------------------------------------------|" << endl
            << "|                ������� ��������                  |" << endl
            << "|--------------------------------------------------|" << endl
            << "|      ��� ����������� ������� ����� �������       |" << endl
            << "|--------------------------------------------------|" << endl;
        _getch();
    }
    deleteSList(*list);
}
