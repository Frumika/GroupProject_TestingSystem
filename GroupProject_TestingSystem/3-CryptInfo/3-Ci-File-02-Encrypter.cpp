#include "3-Ci-File-01-Header.h"

using namespace std;

/* Шифровка строки */
string encrypt(string rawstr)
{
    string newstr;
    int rawEl = 0;
    
    while(rawEl < rawstr.size())
    {
        if((((unsigned char)rawstr[rawEl]-32+(unsigned char)key-32)%224+32) == unsigned char(124) ||
            (((unsigned char)rawstr[rawEl]-32+(unsigned char)key-32)%224+32) == unsigned char(152))
            newstr += (unsigned char)rawstr[rawEl++];
        else newstr += ((unsigned char)rawstr[rawEl++]-32+(unsigned char)key-32)%224+32;
    }
    return newstr;
}