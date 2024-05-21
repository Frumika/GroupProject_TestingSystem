#include "2-EmEq-File-01-Header.h"

void runAddQ()
{
    QList* list = createQList();

    Question newQuestion;

    std::cout
        << "|--------------------------------------------------|\n"
        << "|            >>> Добавление вопроса <<<            |\n"
        << "|--------------------------------------------------|\n";

    std::cout << "| Введите тему вопроса: ";
    std::getline(std::cin, newQuestion.topic);

    std::cout << "| Введите текст вопроса: ";
    std::getline(std::cin, newQuestion.question);

    do
    {
        std::cout << "| Введите первый вариант ответа: ";
        std::getline(std::cin, newQuestion.answer_1);

        std::cout << "| Введите второй вариант ответа: ";
        std::getline(std::cin, newQuestion.answer_2);

        std::cout << "| Введите третий вариант ответа: ";
        std::getline(std::cin, newQuestion.answer_3);

        std::cout << "| Введите четвертый вариант ответа: ";
        std::getline(std::cin, newQuestion.answer_4);

        bool AnswerOptionsCondition =
        (newQuestion.answer_1 == newQuestion.answer_2 ||
            newQuestion.answer_1 == newQuestion.answer_3 ||
            newQuestion.answer_1 == newQuestion.answer_4 ||
            newQuestion.answer_2 == newQuestion.answer_3 ||
            newQuestion.answer_2 == newQuestion.answer_4 ||
            newQuestion.answer_3 == newQuestion.answer_4);

        if (!AnswerOptionsCondition) break;

        std::cout << "| Варианты ответов должны быть уникальными. "
                     "| Пожалуйста, введите их снова.\n";
    }
    while (true);

    do
    {
        std::cout << "| Введите текст правильного варианта ответа: ";
        std::getline(std::cin, newQuestion.rightAnswer);

        bool correctAnswerCondition =
        (newQuestion.rightAnswer == newQuestion.answer_1 ||
            newQuestion.rightAnswer == newQuestion.answer_2 ||
            newQuestion.rightAnswer == newQuestion.answer_3 ||
            newQuestion.rightAnswer == newQuestion.answer_4);

        if (correctAnswerCondition) break;

        std::cout << "| Правильный ответ должен совпадать с одним из вариантов."
                     "| Пожалуйста, введите его снова.\n";
    }
    while (true);

    if (newQuestion.rightAnswer == newQuestion.answer_1) newQuestion.rightAnswerId = 1;
    else if (newQuestion.rightAnswer == newQuestion.answer_2) newQuestion.rightAnswerId = 2;
    else if (newQuestion.rightAnswer == newQuestion.answer_3) newQuestion.rightAnswerId = 3;
    else if (newQuestion.rightAnswer == newQuestion.answer_4) newQuestion.rightAnswerId = 4;
    
    system("cls");

    addQNode(*list, newQuestion);
    exportQuestionsToFile(*list);
    clearQList(*list);
    
    std::cout
    << "|--------------------------------------------------|\n"
    << "|         >>> Вопрос успешно добавлен <<<          |\n"
    << "|--------------------------------------------------|\n"
    << "|--------------------------------------------------|\n"
    << "|  >>> Для продолжения нажмите любую клавишу <<<   |\n"
    << "|--------------------------------------------------|\n";
    char button = _getch();

}
