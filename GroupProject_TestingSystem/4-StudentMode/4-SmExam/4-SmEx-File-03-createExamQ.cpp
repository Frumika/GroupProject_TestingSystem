#include <ctime>
#include <set>

#include "4-SmEx-File-01-Header.h"

std::vector<Question> createExamQuestions(QList& list)
{
    std::vector<Question> examQuestions;
    std::set<int> selectedIds;

    srand(static_cast<unsigned int>(time(0)));

    int randId;

    while (examQuestions.size() < 20)
    {
        randId = rand() % (list.tail->question.id) + 1;

        if (selectedIds.find(randId) == selectedIds.end())
        {
            QNode* node = findQNodeById(list, randId);
            if (node != nullptr)
            {
                examQuestions.push_back(node->question);
                selectedIds.insert(randId);
            }
        }
    }

    return examQuestions;
}
