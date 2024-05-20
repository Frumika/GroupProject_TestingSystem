#include "3-EmEsl-File-01-Header.h"

/*
 * 
 */
int searchLogin(SList& list, std::string login)
{
    SNode* current = list.head;
    
    while (current != nullptr)
    {
        if (current->student.login == login) return current->student.id;
        current = current->next;
    }
    
    return 0;
}
