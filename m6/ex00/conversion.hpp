#ifndef CONVERIONS_HPP
#define CONVERIONS_HPP

#include <iostream>
#include <cfloat>
#include <iomanip>

bool checkCharPhase(std::string str);
bool checkIntPhase(std::string str);
bool checkFloatPhase(std::string str);
bool checkDoublePhase(std::string str);

void convertCharPhase(char c);
void convertIntPhase(std::string str);
void convertFloatPhase(std::string str);
void convertDoublePhase(std::string str);

#endif