
#include "3-SmTe-File-01-Header.h"

std::vector<Question> createQuestions(QList& list,string theme)
{
    std::vector<Question> themeQuestions;
    std::set<int> selectedIds;

    srand(static_cast<unsigned int>(time(0)));

    int randId;

    while (themeQuestions.size() < 10)
    {
        randId = rand() % (list.tail->question.id) + 1;
        if (selectedIds.find(randId) == selectedIds.end())
        {
            QNode* node = findQNodeById(list, randId);
            if (node != nullptr &&node->question.topic==theme)
            {
                themeQuestions.push_back(node->question);
                selectedIds.insert(randId);
            }
        }
    }
    return themeQuestions;
}