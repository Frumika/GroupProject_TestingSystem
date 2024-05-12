#include <iostream>
#include <string>
#include <windows.h>
#include <vector>
#include "1-Wwsl-File-01-Header.h"

using namespace std;


std::string* parseSLine(const std::string& input) //Парсит строку по '|' и возвращает указатель на массив строк
{
    std::vector<string> result;
    std::string temp = "";

    for (char c : input)
    {
        if (c == '|' && temp != "")
        {
            result.push_back(temp);
            temp.clear();
        }
        else
        {
            if (c != '|') temp += c;
        }
    }

    if (!temp.empty())
    {
        result.push_back(temp);
    }

    int size = int(result.size());
    std::string* arr = new string[size];

    for (int i = 0; i < size; i++)
        arr[i] = result[i];

    return arr;
}
