#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>
#include "CountWords.h"
#include "arg_handle.h"
#include "CountChar.h"
using namespace std;

extern string inputFilename;
extern int inputPos;
extern bool weightBool;
int main(int argc, char **argv)
{
	//int ret = Argv_handle(argv);
	ifstream input;
	int argvState = Argv_handle(argv);
	CountChar(inputFilename);
	if (argvState == -1)
	{
		return 0;
	}
	
	
	
	CountWord(inputFilename, weightBool);
	return 0;
}