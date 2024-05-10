
/*
* Функция findLenOfString находит длину строки без учета терминального символа '\0' 
 */
int findLenOfString(char* str)
{
    int count = 0;
    while (str[count] != '\0')
    {
        count++;
    }
    return count;
}