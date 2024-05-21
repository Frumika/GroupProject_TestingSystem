#include "1-Smli-File-01-Header.h"

void logInStudent()
{
    SList* list = createSList();
    Student student;

    bool isTrue = true;
    int studentID;
    int condition;

    do
    {
        studentID = enterStudentLogin(*list, isTrue);
        if (studentID == 0) isTrue = false;
    }
    while (studentID == 0);

    isTrue = true;

    if (studentID >= 1)
    {
        do
        {
            condition = enterStudentPassword(*list, isTrue, studentID);
            if (condition == 0) isTrue = false;
        }
        while (condition == 0);

        if (condition == 1)
        {
            student = findSNodeById(*list, studentID)->student;
            runStudentMenu(student);
        }
    }

    deleteSList(*list);
}
