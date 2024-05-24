#include "3-Ci-File-01-Header.h"

using namespace std;

/* Расшифровка строки */
string decrypt(string str)
{
    string newstr;
    int cryptEl = 0;
    
    while(cryptEl < str.size())
    {
        int key = keyword[cryptEl%keyword.size()];
        unsigned char decrypted_char = (224+(unsigned char)str[cryptEl]-32-key)%224+32;
        unsigned char encrypted_char = ((unsigned char)str[cryptEl]-32+key)%224+32;
        // if(encrypted_char == unsigned char(124))
        //     newstr += (unsigned char)str[cryptEl];
        newstr += decrypted_char;
        cryptEl++;
    }
    return newstr;
}