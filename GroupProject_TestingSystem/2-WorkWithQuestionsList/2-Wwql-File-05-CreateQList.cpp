#include "2-Wwql-File-01-Header.h"
#include <fstream>
#include <iostream>

using namespace std;


/*
 * Функция createQList создает дусвязный список вопросов и возвращает указатель на него.
 *
 * В ходе работы функция взаиводействует с файлом содержащим вопросы.
 * Если файл не удалось открыть то функция выведет на экран сообщение о ошибке и экстренно завершит работу программы.
 * Если же файл удалось открыть фукция создаст список и вернет указатель на него.
 */
QList* createQList()
{
    QList* list = new QList;
    Question question;

    string line;
    ifstream QFile("6-Undefined-TextFile-02-ListOfQuestions.txt");
    

    if (QFile.is_open())
    {
        while (getline(QFile, line))
        {
            string* parsedLine;

            parsedLine = parseLineOfQuestion(line);

            for (int i = 0; i < 9; i++)
            {
                if (i == 0) question.id = stoi(parsedLine[i]);
                else if (i == 1) question.topic = parsedLine[i];
                else if (i == 2) question.question = parsedLine[i];
                else if (i == 3) question.answer_1 = parsedLine[i];
                else if (i == 4) question.answer_2 = parsedLine[i];
                else if (i == 5) question.answer_3 = parsedLine[i];
                else if (i == 6) question.answer_4 = parsedLine[i];
                else if (i == 7) question.rightAnswer = parsedLine[i];
                else if (i == 8) question.rightAnswerId = stoi(parsedLine[i]);
            }

            addQNode(*list, question);

            delete []parsedLine;
        }

        QFile.close();
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
