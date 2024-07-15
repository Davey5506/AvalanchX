#include "fileManager.h"
#include <fstream>
#include <time.h>
using namespace std;

fstream fout;

void fileManager::openNewFile()
{
	fout.open("data.csv", ios::out, ios::app);
	fout << "Time (sec)" << "X Position(meters)" << "Y Position(meters)" << "\n";
}

void fileManager::writeToFile(double t, double x, double y)
{
	fout << t << x << y << endl;
}
