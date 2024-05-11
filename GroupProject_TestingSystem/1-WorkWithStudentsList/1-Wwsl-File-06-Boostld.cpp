#include "1-Wwsl-File-01-Header.h"

/*
 * Функция boostSNodeId увеличивает ID у всех узлов в списке, которые находятся после переданного.
 * У переданного узла ID тоже увеличивается.
 */
void boostSNodeId(SNode* node)
{
    while (node != nullptr)
    {
        node->student.id++;
        node = node->next;
    }
}