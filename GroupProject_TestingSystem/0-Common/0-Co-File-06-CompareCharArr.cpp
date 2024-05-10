#include "0-Co-File-01-Header.h"

/*
* Функция compareStrings сравнивает 2 строки.
 * Если строки равны - функция возвращает true.
 * Иначе - false
 */
bool compareStrings(char* str1, char* str2)
{
    if (findLenOfString(str1) != findLenOfString(str2)) return false;
    else
    {
        for (int i = 0; i < findLenOfString(str1); i++)
        {
            if (str1[i] != str2[i]) return false;
        }
    }
    return true;
}