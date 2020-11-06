#pragma once
#include <string>

//FORMATING
void line(char character = '_', int length = 80, bool newLines = true);

//INPUTS
int getInt(std::string name = "an integer", int min = 0, int max = 0);
double getDouble(std::string name = "an double", double min = 0.0, double max = 0.0);
char getChar(std::string name = "an character");
std::string getString(std::string name = "an string", int minLength = 0, int maxLength = 0);

//CALCS
double cPow(double base, double exponent);