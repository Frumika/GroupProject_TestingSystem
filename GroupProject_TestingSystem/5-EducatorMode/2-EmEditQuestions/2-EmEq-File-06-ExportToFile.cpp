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
            << "|" << q.topic
            << "|" << q.question
            << "|" << q.answer_1
            << "|" << q.answer_2
            << "|" << q.answer_3
            << "|" << q.answer_4
            << "|" << q.rightAnswer
            << "|" << q.rightAnswerId
            << "|\n";
        current = current->next;
    }

    file.close();
}
