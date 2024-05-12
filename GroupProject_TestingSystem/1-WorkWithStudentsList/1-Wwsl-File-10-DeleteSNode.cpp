#include <Windows.h>

#include "1-Wwsl-File-01-Header.h"

/*
 * Функция deleteSNodeByPTR удаляет переданный ей узел из списка.
 *
 * Функция принимает:
 * 1. Ссылку на список из которого нужно удалить узел - SList& list
 * 2. Указатель на узел, который нужно удалить из списка.
 *
 * Функция не возвращает значений.
 */
void deleteSNodeByPTR(SList& list, SNode* node)
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

            reduseSNodeId(list.head);

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
            reduseSNodeId(node);

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
 *Функция deleteSNodeById удаляет узел из списка в соответствии с id.
 *
 * Функция принимает:
 * 1. Ссылку на список из которого нужно удалить узел - QList& list
 * 2. Идентификатор - id
 *
 * Функция не возвращает значений.
 */
void deleteSNodeById(SList& list, int id)
{
    SNode* current = findSNodeById(list, id);
    deleteSNodeByPTR(list, current);
}
