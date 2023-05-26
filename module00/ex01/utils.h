#ifndef CPP_POOL_UTILS_H
#define CPP_POOL_UTILS_H

#include <string>
#include <cstdlib>
#include <cstring>
#include <iomanip>
#include <iostream>

std::string getInput(std::string prompt);

std::string truncateString(std::string str);

bool isValidPhoneNumber(std::string strNumber);

bool isAllDigit(std::string strNumber);

#endif //CPP_POOL_UTILS_H
