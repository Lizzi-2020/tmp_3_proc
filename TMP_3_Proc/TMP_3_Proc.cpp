#include <iostream>
#include <fstream>
#include "list.h"
#include "inall.h"
#include "outall.h"
#include "clear.h"
using namespace std;
#include "outtruck.h"
#include "sortfun.h"

int main(int argc, char* argv[]) {
	cout << argc << endl;
	setlocale(LC_CTYPE, "rus");
	if (argc != 3)
	{
		cout << "Wrong command line arguments\n";
		return 1;
	}
	ifstream ifst(argv[1]);
	ofstream ofst(argv[2]);
	cout << "Start" << endl;
	List c;
	In(c, ifst);
	
	Sort(c);
	Out(c, ofst);
	OutTruck(c, ofst);
	Clear(c);
	return 0;
}