#pragma once
#include "math.h"
#include <iostream>
using namespace std;
using std::string;
class Vegener
{
public:
	string key;
	Vegener(std::string key);
	~Vegener();
	string encrypt(std::string text);
	string decrypt(std::string text);
private:

};

