#pragma once
#include "math.h"
#include <iostream>
using namespace std;
struct alpha {
	char letter;
	int index;
};
class PPM
{
public:
	//base - is a number of characters we are looking at
	PPM(int base, const char* beginning);
	bool cypher(const char* plaintext);
	~PPM();
private:
	const int characternumber = 3;
	alpha** alphabet;
	int base = 0;
	void createAlphabetFromFile(const char& filename);
	int alphabetnumber(char* basestr);

};

