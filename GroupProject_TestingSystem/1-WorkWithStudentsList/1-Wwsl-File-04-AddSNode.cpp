#include "1-Wwsl-File-01-Header.h"


// Добавляет элемент в конец двусвязного списка
void addSNode(SList& list, Student student)
{
    SNode* node = new SNode;

    node->student = student;
    node->next = nullptr;

    if (list.head == nullptr)
    {
        node->prev = nullptr;

        list.head = node;
        list.tail = node;

        node->student.id = 1;
    }

    else
    {
        SNode* current = list.tail;

        current->next = node;
        node->prev = current;

        node->student.id = current->student.id + 1;
        node = list.tail;
    }
}
