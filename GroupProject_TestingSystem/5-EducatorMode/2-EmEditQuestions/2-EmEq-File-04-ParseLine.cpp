#include "2-EmEq-File-01-Header.h"

std::string* parseLine(std::string line)
{
    std::string* ptrToArray = new std::string[9];
    std::string arrayElem = "";
    
    for (int i = 0, j = 0; i < line.size(); i++)
    {
        if (line[i] == '|' && ++i < line.size())
        {
            while (line[i] != '|')
                arrayElem += line[i++];

            ptrToArray[j++] = arrayElem;
            arrayElem = "";
            i--;
        }
    }
    
    return ptrToArray;
}