#include "2-EmEq-File-01-Header.h"

bool chechOnExistance(QList* list, std::string NewQuestion)
{
    QNode* Node = list->head;

    while (Node->next != NULL)
    {
        if (strcmp(Node->question.question.c_str(), NewQuestion.c_str()))
        {
            return 1;
        }

        Node = Node->next;
    }

    return 0;
}

void runAddQ()
{
    QList* list = createQList();

    Question newQuestion;

    bool condition;

    std::cout
        << "|--------------------------------------------------|\n"
        << "|            >>> ���������� ������� <<<            |\n"
        << "|--------------------------------------------------|\n";

    std::cout << "| ������� ���� �������: ";
    std::getline(std::cin, newQuestion.topic);

    std::cout << "| ������� ����� �������: ";
    do
    {
        std::getline(std::cin, newQuestion.question);

        condition = chechOnExistance(list, newQuestion.question);

        if (condition == 1)
        {
            std::cout << "| ������� �� ������ �����������.\n"
                         "| ����������, ������� ����� ������� �����.\n";
        }
    }
    while (condition == 1);

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
