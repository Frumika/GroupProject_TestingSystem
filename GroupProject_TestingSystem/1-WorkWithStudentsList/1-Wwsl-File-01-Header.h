#pragma once

#include "1-Wwsl-File-02-Student.h"
#include "1-Wwsl-File-03-StudentsList.h"

void addSNode(SList& list, Student student);

int addSNodeById(SList& list, Student& student, int id);

SNode* findSNodeById(SList& list, int id);

void deleteSNodeByPTR(SList& list, SNode* node);
void deleteSNodeById(SList& list, int id);

void boostSNodeId(SNode* node);

void reduseSNodeId(SNode* node);

SList* createSList();

void clearSList(SList& list);
void deleteSList(SList& list);


std::string *parseSLine(const std::string &input);