#pragma once

#include "../1-EmCommon/1-EmCo-File-01-Header.h"
#include <string>

std::vector<Question> parseList(std::string filename);

std::string* parseLine(std::string line);
