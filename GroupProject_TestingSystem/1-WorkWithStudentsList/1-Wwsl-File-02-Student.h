#include <string>

struct Student
{
    int id = 0; // Номер студента в списке (должен быть уникальным)
    std::string login = "Undefined";
    std::string password = "Undefined";
    std::string name = "Undefined";
    std::string surname = "Undefined";
    int marks[8] = {0, 0, 0, 0, 0, 0, 0, 0}; // Оценки за темы - Циклы, Массивы, Строки, Рекурсия, Структуры, Файлы, Адреса и указатели, Динамическая память
    double middleMark = 0; // Средняя оценка по всем сданным темам
    int examMark = 0; // Оценка за экзамен 
    bool examStatus = false;
    // Статус сдачи студентом экзамена: true - студент сдавл экзамен; false - не сдавал экзамен.
};