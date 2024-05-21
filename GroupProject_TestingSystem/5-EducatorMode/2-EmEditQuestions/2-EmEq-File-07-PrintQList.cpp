#include "2-EmEq-File-01-Header.h"

void printQList(QList* list)
{
    QNode* currentQNode = list->head;
    const int maxLineLength = 48;

    while (currentQNode != nullptr)
    {
        std::string questionText = currentQNode->question.question;
        int id = currentQNode->question.id;
        std::string idPrefix = "| " + std::to_string(id) + ". ";
        std::string spacePrefix = "|     ";
        int prefixLength = idPrefix.length();
        int spacePrefixLength = spacePrefix.length();

        std::string::size_type pos = 0;
        bool firstLine = true;

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
                currentLineLength += word.length();
                pos = nextSpace + 1;
            }

            if (line.length() < 51)
            {
                line += std::string(51 - line.length(), ' ');
            }
            std::cout << line << "|\n";
        }

        currentQNode = currentQNode->next;
    }
}
