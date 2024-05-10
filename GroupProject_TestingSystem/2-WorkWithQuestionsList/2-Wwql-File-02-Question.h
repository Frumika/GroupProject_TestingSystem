#include <string>

struct Question
{
    int id = 0;
    std::string topic; // Тема вопроса
    std::string question; // Текст вопроса
    std::string answer_1; // Текст 1-го ответа
    std::string answer_2; // Текст 2-го ответа
    std::string answer_3; // Текст 3-го ответа
    std::string answer_4; // Текст 4-го ответа
    std::string rightAnswer; // Текст правильного ответа
    int rightAnswerId; // Номер правильного ответа (1, 2, 3, 4)
};
