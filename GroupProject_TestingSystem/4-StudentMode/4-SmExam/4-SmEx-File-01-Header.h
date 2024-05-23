#pragma once
#include "../0-SmCommon/0-SmCo-File-01-Header.h"
#include <iostream>
#include <vector>

std::vector<Question> createExamQuestions(QList& list);

void printQText(Question question);

void printAnsOptions(Question question);

void printResult(int mistakes, const std::vector<Question>& wrongQuestions, int mark);

void _editSList(SList& list);
#include <iostream>
#include <vector>

std::vector<Question> createExamQuestions(QList& list);

void printQText(Question question);

void printAnsOptions(Question question);

void printResult(int mistakes, const std::vector<Question>& wrongQuestions, int mark);

void _editSList(SList& list);