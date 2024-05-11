#include "1-Wwsl-File-01-Header.h"
#include <fstream>
#include <iostream>

using namespace std;


/*
 * Функция createSList создает дусвязный список вопросов и возвращает указатель на него.
 *
 * В ходе работы функция взаиводействует с файлом содержащим вопросы.
 * Если файл не удалось открыть то функция выведет на экран сообщение о ошибке и экстренно завершит работу программы.
 * Если же файл удалось открыть фукция создаст список и вернет указатель на него.
 */
SList* createSList()
{
    SList* list = new SList;
   Student student;

    string line;
    ifstream SFile("6-Undefined-TextFile-01-ListOfStudents.txt");
    

    if (SFile.is_open())
    {
        while (getline(SFile, line))
        {
            string* parsedLine;

            parsedLine = parseSLine(line);

            for (int i = 0; i < 16; i++)
            {
                if (i == 0) student.id = stoi(parsedLine[i]);
                else if (i == 1) student.login = parsedLine[i];
                else if (i == 2) student.password = parsedLine[i];
                else if (i == 3) student.name = parsedLine[i];
                else if (i == 4) student.surname = parsedLine[i];
                else if (i == 5) student.marks[i-5] = stoi(parsedLine[i]);
                else if (i == 6) student.marks[i-5] = stoi(parsedLine[i]);
                else if (i == 7) student.marks[i-5] = stoi(parsedLine[i]);
                else if (i == 8) student.marks[i-5] = stoi(parsedLine[i]);
                else if (i == 9) student.marks[i-5] = stoi(parsedLine[i]);
                else if (i == 10) student.marks[i-5] = stoi(parsedLine[i]);
                else if (i == 11) student.marks[i-5] = stoi(parsedLine[i]);
                else if (i == 12) student.marks[i-5] = stoi(parsedLine[i]);
                else if (i == 13) student.middleMark = stod(parsedLine[i]);
                else if (i == 14) student.examMark = stoi(parsedLine[i]);
                else if (i == 15) student.examStatus =stoi(parsedLine[i]);
            }

            addSNode(*list, student);

            delete []parsedLine;
        }

        SFile.close();
    }

    else
    {
        cout
            << "|--------------------------------------------------|" << endl
            << "|                 !!! Ошибка !!!                   |" << endl
            << "|--------------------------------------------------|" << endl
            << "|           Файл не был открыт для записи          |" << endl
            << "|   Проверьте правильность указанного пути файла   |" << endl
            << "|--------------------------------------------------|" << endl;

        exit(0);
    }

    return list;
}
