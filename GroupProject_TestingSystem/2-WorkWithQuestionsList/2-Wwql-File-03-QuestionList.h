#include "2-Wwql-File-01-Header.h"

struct QNode
{
    Question question;
    QNode* next = nullptr;
    QNode* prev = nullptr;
};

struct QList
{
    QNode* head = nullptr;
    QNode* tail = nullptr;
};
