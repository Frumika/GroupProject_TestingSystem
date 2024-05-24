#include "1-SmLi-File-01-Header.h"

/*
 * Если студент есть в списке - вернет id студента.
 * Иначе вернет 0
 */
int searchSLogin(SList& list, std::string login)
{
    SNode* current = list.head;
    
    while (current != nullptr)
    {
        if (current->student.login == login) return current->student.id;
        current = current->next;
    }
    
    return 0;
}