#include "Write.h"

using namespace std;

int Writ3()
{
	ofstream Writer;
	Writer.open("bm.txt", ios::app | ios::out);

	do
	{
		Writer << "Line :" << x << endl;
		cout << "Line: " << x << endl;
	} while (time <= 60);

	return x;
}
