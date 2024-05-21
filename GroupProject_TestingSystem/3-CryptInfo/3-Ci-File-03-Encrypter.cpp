#include "3-Ci-File-01-Header.h"
#include "time.h"

using namespace std;

/* Шифровка строки */
string encrypt(string rawstr)
{
    srand(time(NULL));

    string newstr;
    int rawEl = 0;
    
    while(rawEl < rawstr.size())
    {
        if(!(newstr.size()%((unsigned char)key[0]-32)))
            newstr += (rand()%224+32);
        else
            newstr += ((unsigned char)rawstr[rawEl++]-32+(unsigned char)key[1]-32)%224+32;
    }
    return newstr;
}