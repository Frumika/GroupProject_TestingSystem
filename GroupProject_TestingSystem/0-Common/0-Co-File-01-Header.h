#pragma once

#include "0-Co-File-02-Structs.h"
#include "../1-WorkWithStudentsList/1-Wwsl-File-01-Header.h"
#include "../2-WorkWithQuestionsList/2-Wwql-File-01-Header.h"
#include "../3-CryptInfo/3-Ci-File-01-Header.h"


extern char EDUCATOR_PASSWORD[];

void runMainMenu();

// void runStudentLogInMenu();

void runEducatorLogInMenu();

int findLenOfString(char* str);

bool compareStrings(char* str1, char* str2);

int enterSymbol(char* & password);
