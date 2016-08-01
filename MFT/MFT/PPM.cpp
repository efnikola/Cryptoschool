#include "PPM.h"





PPM::PPM(int basein, const char *beginning)
{
	//I don't want it to be calculated for eternity
	//as well as not to be calculated at all
	//so base is 2<b<4
	while (basein < 2 || basein>4) {
		cout << "Why do you have to be mad? enter something i will appreciate!(bse have to be 2,3, or 4)" << endl;
		cout << "base:";
		cin >> basein;
	}
	base = basein;
	//power is the number of our alphabets
	int power = pow(characternumber, base);
	alphabet = new alpha*[power];
	cout << "In version 0.0.0.1 alphabet is generated randomly" << endl;//it's a lie
	for (int i = 0; i < power; i++) {
		alphabet[i] = new alpha[characternumber];
	}
	for (int i = 0; i < power; i++) {
		for (int j = 0; j < characternumber; j++) {
			alphabet[i][j].letter = 'a' + j;
			alphabet[i][j].index = j;
		}
	}
	cout << "This alphabet is generated randomly by fair dice!" << endl;
	for (int j = 0; j < characternumber; j++) {
		cout << alphabet[2][j].letter << "   " << alphabet[2][j].index << endl;
	}


}


bool PPM::cypher(const char * plaintext)
{

	return false;
}

PPM::~PPM()
{
	//i'm just checking if it's deleted properly
	for (int i = 0; i < pow(characternumber, base);i++) {
		cout << "DESTRUCTION OF THE " << i << "th  ALPHABET!!!!" << endl;
		delete alphabet[i];
	}
	cout << "DESTRUCTION COMPLETE" << endl;
	delete alphabet;

}

void PPM::createAlphabetFromFile(const char & filename)
{
}
//this function returns number of the alphabet by the beginning string
int PPM::alphabetnumber(char * basestr)
{
	return 0;
}
