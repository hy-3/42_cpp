#ifndef CONVERIONS_HPP
#define CONVERIONS_HPP

#include <iostream>
#include <cfloat>
#include <iomanip>

bool checkChar(std::string str);
bool checkInt(std::string str);
bool checkFloat(std::string str);
bool checkDouble(std::string str);

void convertToChar(char c);
void convertToInt(std::string str);
void convertToFloat(std::string str);
void convertToDouble(std::string str);

#endif