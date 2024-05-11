#include <string>

struct Question
{
    int id = 0;
    std::string topic = "Undefined"; // Тема вопроса
    std::string question = "Undefined"; // Текст вопроса
    std::string answer_1 = "Undefined"; // Текст 1-го ответа
    std::string answer_2 = "Undefined"; // Текст 2-го ответа
    std::string answer_3 = "Undefined"; // Текст 3-го ответа
    std::string answer_4 = "Undefined"; // Текст 4-го ответа
    std::string rightAnswer = "Undefined"; // Текст правильного ответа
    int rightAnswerId = 0; // Номер правильного ответа (1, 2, 3, 4)
};
