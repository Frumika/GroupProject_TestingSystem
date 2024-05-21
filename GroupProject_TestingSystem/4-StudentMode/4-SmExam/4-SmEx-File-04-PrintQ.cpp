#include "4-SmEx-File-01-Header.h"

void printQText(Question question)
{
    std::cout
        << "|--------------------------------------------------|\n"
        << "|               >>> Текст вопроса <<<              |\n"
        << "|--------------------------------------------------|\n"
        << "| " << question.question << "\n";
}

void printAnsOptions(Question question)
{
    std::cout
        << "|--------------------------------------------------|\n"
        << "|             >>> Варианты ответа <<<              |\n"
        << "|--------------------------------------------------|\n"
        << "| 1. " << question.answer_1 << "\n"
        << "| 2. " << question.answer_2 << "\n"
        << "| 3. " << question.answer_3 << "\n"
        << "| 4. " << question.answer_4 << "\n";
}
