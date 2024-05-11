#include "1-Wwsl-File-01-Header.h"

/*
 * Функция boostSNodeId уменьшает ID у всех узлов в списке, которые находятся после переданного.
 * У переданного узла ID тоже уменьшается.
 */
void reduseQNodeId(SNode* node)
{
    while (node != nullptr)
    {
        node->student.id--;
        node = node->next;
    }
}