#pragma once

#include "../0-Common/0-Co-File-01-Header.h"

extern char key[2];

void keyGen();
std::string encrypt(std::string str);
std::string decrypt(std::string str);