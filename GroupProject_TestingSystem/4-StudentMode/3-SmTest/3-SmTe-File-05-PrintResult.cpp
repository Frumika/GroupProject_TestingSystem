#include "3-SmTe-File-01-Header.h"
void printResult1(int mistakes, const std::vector<Question>& wrongQuestions, int mark)
{
    system("cls");

    std::cout
        << "|--------------------------------------------------|"<<endl
        << "|                  >>> ������ <<<                  |"<<endl
        << "|--------------------------------------------------|"<<endl
        << "|                         " << mark <<"                        |"<<endl
        << "|--------------------------------------------------|"<<endl
        << "|             >>> ���������� ������ <<<            |"<<endl
        << "|--------------------------------------------------|"<<endl
        << "|                        "<<setw(2) << mistakes <<"                        |"<<endl
        << "|--------------------------------------------------|"<<endl;

    if (mistakes != 0)
    {
        int y=0;
        std::cout
            << "|             >>> �������� ������� <<<             |\n"
            << "|--------------------------------------------------|\n";
        for (const auto& question : wrongQuestions)
        {y+=1;
           PrintPoRazmeruQ( question,y);
        }
        std::cout << "|--------------------------------------------------|\n";
    }
    
}