#pragma once
#include "1-Wwsl-File-01-Header.h"

struct SNode
{
    Student student;
    SNode* next = nullptr;
    SNode* prev = nullptr;
};

struct SList
{
    SNode* head = nullptr;
    SNode* tail = nullptr;
};
