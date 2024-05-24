#include "3-Ci-File-01-Header.h"

using namespace std;

/* Расшифровка строки */
string decrypt(string str)
{
    string newstr;
    int cryptEl = 0;
    
    while(cryptEl < str.size())
    {
        if((((unsigned char)newstr[cryptEl]-32+(unsigned char)key-32)%224+32) == unsigned char(124) ||
            (((unsigned char)newstr[cryptEl]-32+(unsigned char)key-32)%224+32) == unsigned char(152))
            newstr += (unsigned char)newstr[cryptEl++];
        else newstr += (224+(unsigned char)str[cryptEl++]-32-(unsigned char)key+32)%224+32;
    }
    return newstr;
}