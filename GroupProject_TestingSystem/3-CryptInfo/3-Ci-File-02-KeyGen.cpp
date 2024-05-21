#include "3-Ci-File-01-Header.h"
#include "string"
#include "time.h"

using namespace std;

char key[2] {'0', '0'};
/*
 *Генерация ключа (происходит при старте программы)
 *1 символ - частота фальшивых символов
 *2 символ - смещение символов
*/
void keyGen()
{
    srand(time(NULL));
    key[0] = rand()%5+34;
    key[1] = rand()%224+33;
}