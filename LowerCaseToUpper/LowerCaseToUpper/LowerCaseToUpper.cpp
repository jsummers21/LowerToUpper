/*
Name: Jared Summers
Program: Lower to upper Converter
Desc: converts lowercase letters to uppercase
*/

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

void LowerToUpper(string & LowerLetter) {
	for (int intLetters = 0; intLetters < LowerLetter.length(); intLetters++) {
		LowerLetter[intLetters] = toupper(LowerLetter[intLetters]);
	}
}

int main()
{
	string LowerLetter;

	cout << "input words to output into uppercase letters: " << endl;
	getline(cin, LowerLetter);

	LowerToUpper(LowerLetter);

	cout << LowerLetter << endl;

    return 0;
}

