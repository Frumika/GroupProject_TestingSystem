﻿#include "2-Wwql-File-01-Header.h"


/*
 * Функция clearQList очищает список - удаляет все узлы которые принадлежат этому списку.
 *
 * Функция принимает:
 * 1. Ссылку на список который надо очистить.
 *
 * Примечание:
 * Саму структуру (список) функция не удаляет, оставляя пригодной для дальнейшей работы.
 * После применения функции в список можно добавлять новые узлы при помощи addQNode.
 * Так же можено использовать другие функции для работы со списком.
 */
void clearQList(QList& list)
{
    while (list.head != nullptr) deleteQNodeByPTR(list, list.head);
}
