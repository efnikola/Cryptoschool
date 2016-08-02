#include <iostream>
#include <string>
#include "PPM.h"
#include "Vegener.h"
using namespace std;

int main() {
	int i = 0;
	PPM* myppm = new PPM(2,(const char*) "ab");
	cout << "Exit to the main class"<<endl;
	char * msg = "bbaacbaacab";
	cout << msg << endl;
	myppm->cypher(msg);
	//myppm->~PPM();
	return 0;
	//vigenere
	std::string key = "BUG";
	Vegener* p = new Vegener(key);
	std::string orig = "DOORS";
    p->encrypt(orig);
    p->decrypt(p->encrypt(orig));
	cout << orig << endl;

}