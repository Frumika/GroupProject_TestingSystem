#pragma once

#include "../1-EmCommon/1-EmCo-File-01-Header.h"
#include <string>
#include <iostream>
#include <conio.h>

void runAddQ();
void runEditQMenu2();
void runDelQMenu();
void exportQuestionsToFile(const QList& list);
void printQList(QList* list);