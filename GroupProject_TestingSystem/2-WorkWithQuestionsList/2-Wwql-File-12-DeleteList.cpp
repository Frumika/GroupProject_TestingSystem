#include "2-Wwql-File-01-Header.h"


/*
 * Функция deleteQList удаляет список и все узлы принадлежащие ему.
 */
void deleteQList(QList& list)
{
    clearQList(list);
    delete &list;
}
