#include "2-EmEq-File-01-Header.h"

void runAddQ()
{
    QList* list = createQList();

    Question newQuestion;

    std::cout
        << "|--------------------------------------------------|\n"
        << "|            >>> ���������� ������� <<<            |\n"
        << "|--------------------------------------------------|\n";

    std::cout << "| ������� ���� �������: ";
    std::getline(std::cin, newQuestion.topic);

    std::cout << "| ������� ����� �������: ";
    std::getline(std::cin, newQuestion.question);

    do
    {
        std::cout << "| ������� ������ ������� ������: ";
        std::getline(std::cin, newQuestion.answer_1);

        std::cout << "| ������� ������ ������� ������: ";
        std::getline(std::cin, newQuestion.answer_2);

        std::cout << "| ������� ������ ������� ������: ";
        std::getline(std::cin, newQuestion.answer_3);

        std::cout << "| ������� ��������� ������� ������: ";
        std::getline(std::cin, newQuestion.answer_4);

        bool AnswerOptionsCondition =
        (newQuestion.answer_1 == newQuestion.answer_2 ||
            newQuestion.answer_1 == newQuestion.answer_3 ||
            newQuestion.answer_1 == newQuestion.answer_4 ||
            newQuestion.answer_2 == newQuestion.answer_3 ||
            newQuestion.answer_2 == newQuestion.answer_4 ||
            newQuestion.answer_3 == newQuestion.answer_4);

        if (!AnswerOptionsCondition) break;

        std::cout << "| �������� ������� ������ ���� �����������. "
                     "| ����������, ������� �� �����.\n";
    }
    while (true);

    do
    {
        std::cout << "| ������� ����� ����������� �������� ������: ";
        std::getline(std::cin, newQuestion.rightAnswer);

        bool correctAnswerCondition =
        (newQuestion.rightAnswer == newQuestion.answer_1 ||
            newQuestion.rightAnswer == newQuestion.answer_2 ||
            newQuestion.rightAnswer == newQuestion.answer_3 ||
            newQuestion.rightAnswer == newQuestion.answer_4);

        if (correctAnswerCondition) break;

        std::cout << "| ���������� ����� ������ ��������� � ����� �� ���������."
                     "| ����������, ������� ��� �����.\n";
    }
    while (true);

    if (newQuestion.rightAnswer == newQuestion.answer_1) newQuestion.rightAnswerId = 1;
    else if (newQuestion.rightAnswer == newQuestion.answer_2) newQuestion.rightAnswerId = 2;
    else if (newQuestion.rightAnswer == newQuestion.answer_3) newQuestion.rightAnswerId = 3;
    else if (newQuestion.rightAnswer == newQuestion.answer_4) newQuestion.rightAnswerId = 4;
    
    system("cls");

    addQNode(*list, newQuestion);
    exportQuestionsToFile(*list);
    deleteQList(*list);
    
    std::cout
    << "|--------------------------------------------------|\n"
    << "|         >>> ������ ������� �������� <<<          |\n"
    << "|--------------------------------------------------|\n"
    << "|--------------------------------------------------|\n"
    << "|  >>> ��� ����������� ������� ����� ������� <<<   |\n"
    << "|--------------------------------------------------|\n";
    char button = _getch();

}
