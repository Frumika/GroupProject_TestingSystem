#include "1-Wwsl-File-01-Header.h"


/*
 * Функция deleteSList удаляет список и все узлы принадлежащие ему.
 */
void deleteSList(SList& list)
{
    clearSList(list);
    delete &list;
}