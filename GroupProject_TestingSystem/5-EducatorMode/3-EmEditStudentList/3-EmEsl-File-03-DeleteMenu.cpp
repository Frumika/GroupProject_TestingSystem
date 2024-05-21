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
                << "|                 Студент удалён                   |" << endl
                << "|--------------------------------------------------|" << endl
                << "|      Для продолжения нажмите любую клавишу       |" << endl
                << "|--------------------------------------------------|" << endl;
            _getch();
        }
    }

    else
    {
        cout
            << "|--------------------------------------------------|" << endl
            << "|     Студентов нет. Сначала добавьте студента.    |" << endl
            << "|--------------------------------------------------|" << endl
            << "|      Для продолжения нажмите любую клавишу       |" << endl
            << "|--------------------------------------------------|" << endl;
        _getch();
    }

    deleteSList(*list);
}
