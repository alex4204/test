#include <thread>
#include "Globals.h"
#include "Time.h"
#include "Write.h"

using namespace std;

int main()
{

	thread c(Count);
	thread w2(Writ3);

	w2.join();

	int result = ((x / 1051) * 2000) - 150;
	cout << "Result: " << result << endl;

//pause

}
