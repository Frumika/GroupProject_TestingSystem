
#pragma once
#include "../0-SmCommon/0-SmCo-File-01-Header.h"
#include <iostream>
#include <vector>
#include <conio.h>
#include <iomanip>
using namespace std;
#include <ratio>
#include <ctime>
#include <set>
using namespace std;
std::vector<Question> createQuestions(QList& list,string theme);
void printQText1(Question question,int num);
void printAnsOptions1(Question question);
void _editSList(SList& list);
void runTestMode(Student& student);
void runTest(Student& student,string theme,int themenum);
void printResult1(int mistakes, const std::vector<Question>& wrongQuestions, int mark);
void PrintPoRazmeruQ(Question question,int num);
void PrintPoRazmeruAns(string answer,int num);