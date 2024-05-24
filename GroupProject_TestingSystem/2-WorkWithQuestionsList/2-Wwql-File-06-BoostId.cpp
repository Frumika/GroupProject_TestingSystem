#include "2-Wwql-File-01-Header.h"

/*
 * Функция boostQNodeId увеличивает ID у всех узлов в списке, которые находятся после переданного.
 * У переданного узла ID тоже увеличивается.
 */
void boostQNodeId(QNode* node)
{
    while (node != nullptr)
    {
        node->question.id++;
        node = node->next;
    }
}