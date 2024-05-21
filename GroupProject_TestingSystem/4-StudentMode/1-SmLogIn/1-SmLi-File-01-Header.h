#pragma once
#include "../0-SmCommon/0-SmCo-File-01-Header.h"

void logInStudent();

int enterStudentLogin(SList& list, bool isTrue);

int searchSLogin(SList& list, std::string login);

int enterStudentPassword(SList& list, bool isTrue, int studentID);

int searchSPassword(SList& list, std::string password, int studentID);