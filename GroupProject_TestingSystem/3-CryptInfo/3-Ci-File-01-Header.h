#pragma once

#include "../0-Common/0-Co-File-01-Header.h"

static char key = 'F';

void fileEncrypter(std::string studentFile, std::string questionFile);
void fileDecrypter(std::string studentFile, std::string questionFile);
std::string encrypt(std::string str);
std::string decrypt(std::string str);