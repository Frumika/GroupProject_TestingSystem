#include "3-EmEsl-File-01-Header.h"
#include <iostream>

using namespace std;


/*
 * Функция возвращает:
 * 1. 1 - Студент был удалён
 * 2. 0 - Студент не был удалён
 */
int deleteStudentByLogin(SList& list)
{
    int studentID;
    bool isLoginTrue = true;
    int condition;

    do
    {
        studentID = enterInfo(list, isLoginTrue, false);
        if (studentID == 0) isLoginTrue = false;
    }
    while (studentID == 0);

    if (studentID != -1)
    {
        deleteSNodeById(list, studentID);
        condition = 1;
    }

    else condition = 0;


    return condition;
}
