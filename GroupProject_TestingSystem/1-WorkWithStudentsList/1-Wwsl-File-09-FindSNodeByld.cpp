#include "1-Wwsl-File-01-Header.h"


/*
 * Функция findSNodeById ищет в списке узел, id которого соответствует переданному.
 * 
 * Функция принимает:
 * 1. Ссылку на список с которым ведется работа - SList& list
 * 2. Идентификатор - id
 *
 * Функция возвращает:
 * 1. Если узел со значением id равным переданному есть в списке, то функция вернёт указатель на обнаруженный узел.
 * 2. Если такого узла нет - функция вернёт указатель на пустой узел (этот узел не принадлежит никакому списку и имеет "пустые занчения")
 */
SNode* findSNodeById(SList& list, int id)
{
    if(list.head->student.id <= id && id <= list.tail->student.id)
    {
        SNode* current = list.head;
        while (current->student.id != id) current = current->next;
        return current;
    }

    else
    {
        SNode* failNode = new SNode;
        return failNode;
    }
}