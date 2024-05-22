#include "3-EmEsl-File-01-Header.h"
#include <fstream>

using namespace std;

/*
 * 
 */
void _editSList(SList& list)
{
    SNode* current = list.head;
    ofstream file("6-Undefined-TextFile-01-ListOfStudents.txt", ios::out);

    while (current != nullptr)
    {
        file << "|" << current->student.id;
        file << "|" << encrypt(current->student.login);
        file << "|" << encrypt(current->student.password);
        file << "|" << encrypt(current->student.name);
        file << "|" << encrypt(current->student.surname);
        file << "|" << current->student.marks[0];
        file << "|" << current->student.marks[1];
        file << "|" << current->student.marks[2];
        file << "|" << current->student.marks[3];
        file << "|" << current->student.marks[4];
        file << "|" << current->student.marks[5];
        file << "|" << current->student.marks[6];
        file << "|" << current->student.marks[7];
        file << "|" << current->student.middleMark;
        file << "|" << current->student.examMark;
        file << "|" << current->student.examStatus << "|" << "\n";

        current = current->next;
    }
}
