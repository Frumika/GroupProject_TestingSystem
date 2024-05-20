#include "3-EmEsl-File-01-Header.h"
#include <iostream>
#include <conio.h>

using namespace std;


/*
 * 
 */
int _addStudent(SList& list)
{
    int studentID;
    
    do
    {
        studentID = enterInfo(list, true, true);
        
        if (studentID >= 1)
        {
            cout
               << "|--------------------------------------------------|" << endl
               << "|      Студент с таким логином уже существует      |" << endl
               << "|--------------------------------------------------|" << endl;
            _getch();
        }
    }
    while (studentID == 1);

    if(studentID == 0) return 1;
    
    else return 0;
}
