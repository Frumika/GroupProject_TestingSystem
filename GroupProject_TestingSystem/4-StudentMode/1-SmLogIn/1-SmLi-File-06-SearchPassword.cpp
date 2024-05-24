#include "1-SmLi-File-01-Header.h"

/*
 * Если студент есть в списке - вернет 1.
 * Иначе вернет 0
 */
int searchSPassword(SList& list, std::string password, int studentID)
{
    SNode* node = findSNodeById(list, studentID);
    return (node->student.password == password) ? 1 : 0;
}
