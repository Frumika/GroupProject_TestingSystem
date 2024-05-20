#include "3-EmEsl-File-01-Header.h"
#include <iostream>
#include <conio.h>

using namespace std;


/*
 * 
 */
void runMenuOfChangeProgressOfStudent()
{
    SList* list = createSList();

    int studentID;
    int isLoginTrue;

    do
    {
        studentID = enterInfo(*list, true, false);
        if (studentID == 0) isLoginTrue = false;
    }
    while (studentID == 0);


    if (studentID >= 1) showMenuOfChanges(*list, studentID);
    
    clearSList(*list);
}
