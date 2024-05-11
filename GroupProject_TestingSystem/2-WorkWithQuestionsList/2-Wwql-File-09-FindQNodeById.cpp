#include "2-Wwql-File-01-Header.h"


/*
 * Функция findQNodeById ищет в списке узел, id которого соответствует переданному.
 * 
 * Функция принимает:
 * 1. Ссылку на список с которым ведется работа - QList& list
 * 2. Идентификатор - id
 *
 * Функция возвращает:
 * 1. Если узел со значением id равным переданному есть в списке, то функция вернёт указатель на обнаруженный узел.
 * 2. Если такого узла нет - функция вернёт указатель на пустой узел (этот узел не принадлежит никакому списку и имеет "пустые занчения")
 */
QNode* findQNodeById(QList& list, int id)
{
    if(list.head->question.id <= id && id <= list.tail->question.id)
    {
        QNode* current = list.head;
        while (current->question.id != id) current = current->next;
        return current;
    }

    else
    {
        QNode* failNode = new QNode;
        return failNode;
    }
}
