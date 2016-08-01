#include <iostream>
#include "PPM.h"
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

}