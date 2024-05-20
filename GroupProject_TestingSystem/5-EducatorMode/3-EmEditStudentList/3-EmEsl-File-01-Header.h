#pragma once

#include "../1-EmCommon/1-EmCo-File-01-Header.h"

void runMenuOfDeleteStudent();

void runMenuOfAddOfStudent();

void runMenuOfChangeProgressOfStudent();

void runMenuOfPrintListOfStudent();

int searchLogin(SList& list, std::string login);

int enterInfo(SList& list, bool isTrue, bool isAdd);

int deleteStudentByLogin(SList& list);

void _editSList(SList& list);

int _addStudent(SList& list);

int _enterPassword(Student& student);

int _enterName(Student& student);

int _enterSurname(Student& student);

void changeTopic(SList& list, SNode& current);

void showMenuOfChanges(SList& list, int& studentID);

void changeGradeForTopic(SList& list, SNode& node, int index);

void changeGradeForExam(SList list, SNode& node);

void changeStatusOfExam(SList list, SNode& node);

void changeExam(SList& list, SNode& current);
