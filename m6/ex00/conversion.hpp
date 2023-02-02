#ifndef CONVERIONS_HPP
#define CONVERIONS_HPP

#include <iostream>
#include <cfloat>
#include <iomanip>

bool checkCharPhase(std::string str);
bool checkIntPhase(std::string str);
bool checkFloatDoublePhase(std::string str);

void convertCharPhase(char c);
void convertIntPhase(std::string str);
void convertFloatDoublePhase(std::string str);

#endif