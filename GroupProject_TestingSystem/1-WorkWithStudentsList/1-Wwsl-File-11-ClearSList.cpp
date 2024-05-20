#include "1-Wwsl-File-01-Header.h"


/*
 * Функция clearSList очищает список - удаляет все узлы которые принадлежат этому списку.
 *
 * Функция принимает:
 * 1. Ссылку на список который надо очистить.
 *
 * Примечание:
 * Саму структуру (список) функция не удаляет, оставляя пригодной для дальнейшей работы.
 * После применения функции в список можно добавлять новые узлы при помощи addSNode.
 * Так же можено использовать другие функции для работы со списком.
 */
void clearSList(SList& list)
{
    while (list.head != nullptr) deleteSNodeByPTR(list, list.head);
    delete &list;
}