#include "2-Wwql-File-01-Header.h"

/*
 * Функция boostQNodeId уменьшает ID у всех узлов в списке, которые находятся после переданного.
 * У переданного узла ID тоже уменьшается.
 */
void reduseQNodeId(QNode* node)
{
    while (node != nullptr)
    {
        node->question.id--;
        node = node->next;
    }
}