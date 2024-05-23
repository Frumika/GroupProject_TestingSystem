#include "2-EmEq-File-01-Header.h"
#include <fstream>

void exportQuestionsToFile(const QList& list)
{
    std::ofstream file("6-Undefined-TextFile-02-ListOfQuestions.txt");
    if (!file.is_open())
    {
        std::cerr
            << "|--------------------------------------------------|\n"
            << "|        >>> Ошибка при открытии файла <<<         |\n"
            << "|--------------------------------------------------|\n";
        return;
    }

    QNode* current = list.head;
    while (current != nullptr)
    {
        const Question& q = current->question;
        file << "|" << q.id
            << "|" << encrypt(q.topic)
            << "|" << encrypt(q.question)
            << "|" << encrypt(q.answer_1)
            << "|" << encrypt(q.answer_2)
            << "|" << encrypt(q.answer_3)
            << "|" << encrypt(q.answer_4)
            << "|" << encrypt(q.rightAnswer)
            << "|" << q.rightAnswerId
            << "|\n";
        current = current->next;
    }

    file.close();
}
