#include <conio.h>

#include "4-SmEx-File-01-Header.h"

void printResult(int mistakes, const std::vector<Question>& wrongQuestions, int mark)
{
    system("cls");

    std::cout
        << "|--------------------------------------------------|\n"
        << "|                  >>> ������ <<<                  |\n"
        << "|--------------------------------------------------|\n"
        << "| " << mark << "\n"
        << "|--------------------------------------------------|\n"
        << "|             >>> ���������� ������ <<<            |\n"
        << "|--------------------------------------------------|\n"
        << "| " << mistakes << "\n"
        << "|--------------------------------------------------|\n";

    if (mistakes != 0)
    {
        std::cout
            << "|             >>> �������� ������� <<<             |\n"
            << "|--------------------------------------------------|\n";
        for (const auto& question : wrongQuestions)
        {
            std::cout << "| " << question.question << "\n";
            std::cout << "| \n" ;
        }
        std::cout << "|--------------------------------------------------|\n";
    }
    
}