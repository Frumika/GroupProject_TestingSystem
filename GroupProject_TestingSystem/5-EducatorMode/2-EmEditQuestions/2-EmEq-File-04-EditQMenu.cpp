#include "2-EmEq-File-01-Header.h"
#include <iostream>
#include <conio.h>
#include <string>

void printTopic(Question& question)
{
    std::cout
        << "|--------------------------------------------------|\n"
        << "|               >>> Тема вопроса <<<               |\n"
        << "|--------------------------------------------------|\n"
        << "| " << question.topic << "\n";
}

void printQText(Question& question)
{
    std::cout
        << "|--------------------------------------------------|\n"
        << "|               >>> Текст вопроса <<<              |\n"
        << "|--------------------------------------------------|\n"
        << "| " << question.question << "\n";
}

void printAnsOptions(Question& question)
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

void printRightAns(Question& question)
{
    std::cout
        << "|--------------------------------------------------|\n"
        << "|             >>> Правильный ответ <<<             |\n"
        << "|--------------------------------------------------|\n"
        << "| " << question.rightAnswer << "\n";
}

void printRightAnsId(Question& question)
{
    std::cout
        << "|--------------------------------------------------|\n"
        << "|         >>> Номер правильного ответа <<<         |\n"
        << "|--------------------------------------------------|\n"
        << "| " << question.rightAnswerId << "\n";
}

void printQuestion(Question& question)
{
    std::cout
        << "|--------------------------------------------------|\n"
        << "|             >>> Изменение вопроса <<<            |\n";

    printTopic(question);
    printQText(question);
    printAnsOptions(question);
    printRightAns(question);
    printRightAnsId(question);
}

void runEditQMenu2()
{
    QList* list = createQList();
    Question* questionToChange;

    char button;
    bool condition;

    int idToChange;

    std::cout
        << "|--------------------------------------------------|\n"
        << "|             >>> Изменение вопроса <<<            |\n"
        << "|--------------------------------------------------|\n";

    printQList(list);

    std::cout << "|--------------------------------------------------|\n";

    do
    {
        std::cout << "| Введите id вопроса который хотите изменить: ";
        std::cin >> idToChange;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // clear input buffer
    }
    while ((findQNodeById(*list, idToChange)->question.id != idToChange));

    questionToChange = &findQNodeById(*list, idToChange)->question;

    system("cls");

    printQuestion(*questionToChange);

    std::cout
        << "|--------------------------------------------------|\n"
        << "|           >>> Опции на изменение <<<             |\n"
        << "|--------------------------------------------------|\n"
        << "| 1. Тема вопроса                                  |\n"
        << "| 2. Текст вопроса                                 |\n"
        << "| 3. Варианты ответа                               |\n"
        << "| 4. Правильный ответ                              |\n"
        << "| 0. Назад                                         |\n"
        << "|--------------------------------------------------|\n";

    do
    {
        button = _getch();
        condition = (button == '1' || button == '2' || button == '3' || button == '4' || button == '5' || button ==
            '0');
    }
    while (!condition);

    system("cls");

    switch (button)
    {
    case '1':
        {
            system("cls");
            
            printTopic(*questionToChange);

            std::cout
                << "|--------------------------------------------------|\n"
                << "|             >>> ENTER чтобы пропустить <<<       |\n"
                << "|--------------------------------------------------|\n";

            std::string newTopic;

            std::cout << "| Введите новую тему вопроса: ";
            std::getline(std::cin, newTopic);

            if (!newTopic.empty())
                questionToChange->topic = newTopic;
        }
    case '2':
        {
            system("cls");
            
            printQText(*questionToChange);

            std::string newText;

            std::cout
                << "|--------------------------------------------------|\n"
                << "|             >>> ENTER чтобы пропустить <<<       |\n"
                << "|--------------------------------------------------|\n";

            std::cout << "| Введите новый текст вопроса: ";
            std::getline(std::cin, newText);

            if (!newText.empty())
                questionToChange->question = newText;
        }
    case '3':
        {
            system("cls");
            
            printAnsOptions(*questionToChange);

            std::string newAnswer1, newAnswer2, newAnswer3, newAnswer4;
            bool AnswerOptionsCondition;

            do
            {
                std::cout
                    << "|--------------------------------------------------|\n"
                    << "|             >>> ENTER чтобы пропустить <<<       |\n"
                    << "|--------------------------------------------------|\n";

                std::cout << "| Введите первый вариант ответа: ";
                std::getline(std::cin, newAnswer1);
                std::cout << "| Введите второй вариант ответа: ";
                std::getline(std::cin, newAnswer2);
                std::cout << "| Введите третий вариант ответа: ";
                std::getline(std::cin, newAnswer3);
                std::cout << "| Введите четвертый вариант ответа: ";
                std::getline(std::cin, newAnswer4);

                AnswerOptionsCondition =
                    (!newAnswer1.empty() && (newAnswer1 == newAnswer2 || newAnswer1 == newAnswer3 || newAnswer1 ==
                        newAnswer4)) ||
                    (!newAnswer2.empty() && (newAnswer2 == newAnswer3 || newAnswer2 == newAnswer4)) ||
                    (!newAnswer3.empty() && newAnswer3 == newAnswer4);

                if (AnswerOptionsCondition)
                    std::cout << "|--------------------------------------------------|\n"
                                 "| Варианты ответов должны быть уникальными.        |\n"
                                 "| Пожалуйста, введите их снова.                    |\n"
                                 "|--------------------------------------------------|\n";
            }
            while (AnswerOptionsCondition);

            if (!newAnswer1.empty()) questionToChange->answer_1 = newAnswer1;
            if (!newAnswer2.empty()) questionToChange->answer_2 = newAnswer2;
            if (!newAnswer3.empty()) questionToChange->answer_3 = newAnswer3;
            if (!newAnswer4.empty()) questionToChange->answer_4 = newAnswer4;
        }
    case '4':
        {
            system("cls");
            
            printAnsOptions(*questionToChange);
            printRightAns(*questionToChange);

            std::string newRightAnswer;
            bool correctAnswerCondition;

            do
            {
                std::cout
                    << "|--------------------------------------------------|\n"
                    << "|             >>> ENTER чтобы пропустить <<<       |\n"
                    << "|--------------------------------------------------|\n";

                std::cout << "| Введите новый правильный ответ: ";
                std::getline(std::cin, newRightAnswer);

                correctAnswerCondition =
                (!newRightAnswer.empty() && (newRightAnswer == questionToChange->answer_1 ||
                    newRightAnswer == questionToChange->answer_2 ||
                    newRightAnswer == questionToChange->answer_3 ||
                    newRightAnswer == questionToChange->answer_4));

                if (!correctAnswerCondition)
                    std::cout <<
                        "|--------------------------------------------------|\n"
                        "| Правильный ответ должен совпадать                |\n"
                        "| с одним из вариантов.                            |\n"
                        "| Пожалуйста, введите его снова.                   |\n"
                        "|--------------------------------------------------|\n";
            }
            while (!correctAnswerCondition);

            if (!newRightAnswer.empty())
                questionToChange->rightAnswer = newRightAnswer;

            if (newRightAnswer == questionToChange->answer_1) questionToChange->rightAnswerId = 1;
            else if (newRightAnswer == questionToChange->answer_2) questionToChange->rightAnswerId = 2;
            else if (newRightAnswer == questionToChange->answer_3) questionToChange->rightAnswerId = 3;
            else if (newRightAnswer == questionToChange->answer_4) questionToChange->rightAnswerId = 4;
        }
    }
    exportQuestionsToFile(*list);
    clearQList(*list);
}
