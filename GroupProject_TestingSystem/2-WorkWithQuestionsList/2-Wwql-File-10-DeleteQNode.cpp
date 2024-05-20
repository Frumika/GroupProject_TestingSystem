#include <Windows.h>

#include "2-Wwql-File-01-Header.h"

/*
 * Функция deleteQNodeByPTR удаляет переданный ей узел из списка.
 *
 * Функция принимает:
 * 1. Ссылку на список из которого нужно удалить узел - QList& list
 * 2. Указатель на узел, который нужно удалить из списка.
 *
 * Функция не возвращает значений.
 */
void deleteQNodeByPTR(QList& list, QNode* node)
{
    if (node == list.head)
    {
        if (node->next == nullptr)
        {
            list.head = nullptr;
            list.tail = nullptr;
            delete node;
        }

        else
        {
            list.head = node->next;
            list.head->prev = nullptr;
            node->next = nullptr;

            reduseQNodeId(list.head);

            delete node;
        }
    }

    else if (node == list.tail)
    {
        list.tail = node->prev;
        list.tail->next = nullptr;
        delete node;
    }

    else
    {
        if (node->next != nullptr && node->prev != nullptr)
        {
            reduseQNodeId(node);

            node->prev->next = node->next;
            node->next->prev = node->prev;

            node->next = nullptr;
            node->prev = nullptr;

            delete node;
        }

        else
        {
            delete node;
        }
    }
}


/*
 *Функция deleteQNodeById удаляет узел из списка в соответствии с id.
 *
 * Функция принимает:
 * 1. Ссылку на список из которого нужно удалить узел - QList& list
 * 2. Идентификатор - id
 *
 * Функция не возвращает значений.
 */
void deleteQNodeById(QList& list, int id)
{
    QNode* current = findQNodeById(list, id);
    deleteQNodeByPTR(list, current);
}
