#include "3-Ci-File-01-Header.h"
#include "time.h"

using namespace std;

/* Расшифровка строки */
string decrypt(string str)
{
    srand(time(NULL));

    string newstr;
    int cryptEl = 0;
    
    while(cryptEl < str.size())
    {
        if(cryptEl%((unsigned char)key[0]-32))
            newstr += (224+(unsigned char)str[cryptEl]-32-(unsigned char)key[1]+32)%224+32;
        cryptEl++;
    }
    return newstr;
}