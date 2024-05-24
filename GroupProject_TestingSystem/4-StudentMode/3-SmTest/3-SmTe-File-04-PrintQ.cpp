
#include "3-SmTe-File-01-Header.h"
void PrintPoRazmeruQ(Question question,int num)
{
    std::string questionText = question.question;
    std::string idPrefix = "| " + std::to_string(num) + "| ";
    std::string spacePrefix = "|     ";
    int prefixLength = size_t(idPrefix.length());
    int spacePrefixLength = size_t(spacePrefix.length());

    std::string::size_type pos = 0;
    bool firstLine = true;
    const int maxLineLength = 48;
    while (pos < questionText.length())
    {
        std::string line;
        if (firstLine)
        {
            line = idPrefix;
            firstLine = false;
        }
        else
        {
            line = spacePrefix;
        }

        int currentLineLength = (firstLine ? prefixLength : spacePrefixLength);
        while (pos < questionText.length() && currentLineLength < maxLineLength)
        {
            std::string::size_type nextSpace = questionText.find(' ', pos);
            if (nextSpace == std::string::npos) nextSpace = questionText.length();
            std::string word = questionText.substr(pos, nextSpace - pos + 1);

            if (currentLineLength + word.length() > maxLineLength)
            {
                break;
            }

            line += word;
            currentLineLength += size_t(word.length());
            pos = nextSpace + 1;
        }

        if (line.length() < 51)
        {
            line += std::string(51 - line.length(), ' ');
        }
        std::cout << line << "|\n";
    }
}
void PrintPoRazmeruAns(string answer,int num)
{
    std::string questionText =answer;
    std::string idPrefix = "| " + std::to_string(num) + "| ";
    std::string spacePrefix = "|     ";
    int prefixLength = size_t(idPrefix.length());
    int spacePrefixLength = size_t(spacePrefix.length());

    std::string::size_type pos = 0;
    bool firstLine = true;
    const int maxLineLength = 48;
    while (pos < questionText.length())
    {
        std::string line;
        if (firstLine)
        {
            line = idPrefix;
            firstLine = false;
        }
        else
        {
            line = spacePrefix;
        }

        int currentLineLength = (firstLine ? prefixLength : spacePrefixLength);
        while (pos < questionText.length() && currentLineLength < maxLineLength)
        {
            std::string::size_type nextSpace = questionText.find(' ', pos);
            if (nextSpace == std::string::npos) nextSpace = questionText.length();
            std::string word = questionText.substr(pos, nextSpace - pos + 1);

            if (currentLineLength + word.length() > maxLineLength)
            {
                break;
            }

            line += word;
            currentLineLength += size_t(word.length());
            pos = nextSpace + 1;
        }

        if (line.length() < 51)
        {
            line += std::string(51 - line.length(), ' ');
        }
        std::cout << line << "|\n";
    }
}
void printQText1(Question question,int num)
{
    std::cout
        << "|--------------------------------------------------|\n"
        << "|               >>> Текст вопроса <<<              |\n"
        << "|--------------------------------------------------|\n";
    PrintPoRazmeruQ( question,num);
}

void printAnsOptions1(Question question)
{
    std::cout
        << "|--------------------------------------------------|\n"
        << "|             >>> Варианты ответа <<<              |\n"
        << "|--------------------------------------------------|\n";
    PrintPoRazmeruAns(question.answer_1,1);
    PrintPoRazmeruAns(question.answer_2,2);
    PrintPoRazmeruAns(question.answer_3,3);
    PrintPoRazmeruAns(question.answer_4,4);
}