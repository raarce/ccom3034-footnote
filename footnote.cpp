// 
// Base code for footnote exercise.
//
// This code shall detect all the footnote keywords, save each footnote to a queue, 
// then print the all the footnotes at the end of the text.
// 
// For example: For a text file that contains:
// This is an example \footnote{ focus on solving }. The plain text \footnote{ today's tech } appears.
//
// The output of the program shall be:
// This is an example [1]. The plain text [2] appears.
//
// [1] focus on solving
// [2] today's tech

#include <iostream>
#include <string>
#include <fstream>

using namespace std;
int main(int argc, char const *argv[])
{
	string st;

	if (argc < 2) {
		cout << "Usage: " << argv[0] << " <filename>.";
		exit (1);
	}

	fstream inFile  (argv[1], fstream::in);
	while (inFile.good()) {
		inFile >> st;
		cout << st << endl;
	}

	return 0;
}