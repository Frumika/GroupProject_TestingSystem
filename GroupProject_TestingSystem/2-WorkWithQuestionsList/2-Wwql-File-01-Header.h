#pragma once

#include "2-Wwql-File-02-Question.h"
#include "2-Wwql-File-03-QuestionList.h"

void addQNode(QList& list, Question& question);

int addQNodeById(QList& list, Question& question, int id);

QNode* findQNodeById(QList& list, int id);

void deleteQNodeByPTR(QList& list, QNode* node);
void deleteQNodeById(QList& list, int id);

void boostQNodeId(QNode* node);

void reduseQNodeId(QNode* node);

QList* createQList();

void clearQList(QList& list);
void deleteQList(QList& list);


std::string* parseLineOfQuestion(std::string& line);
