#include "3-Ci-File-01-Header.h"

using namespace std;

/* Шифровка строки */
string encrypt(string rawstr)
{
    string newstr;
    int rawEl = 0;
    
    while(rawEl < rawstr.size())
    {
        int key = keyword[rawEl%keyword.size()];
        unsigned char encrypted_char = ((unsigned char)rawstr[rawEl]-32+key)%224+32;
        if(encrypted_char == unsigned char(124))
            newstr += (unsigned char)rawstr[rawEl];
        else newstr += encrypted_char;
        rawEl++;
    }
    return newstr;
}