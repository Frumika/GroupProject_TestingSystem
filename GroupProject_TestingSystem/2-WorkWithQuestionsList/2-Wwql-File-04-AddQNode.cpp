#include "2-Wwql-File-01-Header.h"


// Добавляет элемент в конец двусвязного списка
void addQNode(QList& list, Question& question)
{
    QNode* node = new QNode;

    node->question = question;
    node->next = nullptr;

    if (list.head == nullptr)
    {
        node->prev = nullptr;

        list.head = node;
        list.tail = node;

        node->question.id = 1;
    }

    else
    {
        QNode* current = list.tail;

        current->next = node;
        node->prev = current;

        node->question.id = current->question.id + 1;
        
        list.tail = node;
    }
}
