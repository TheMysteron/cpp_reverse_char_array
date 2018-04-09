#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;


int main() {

	char text[] = "hello";

	cout << text << endl;

	int nChars = sizeof(text) - 1;

	char *pStart = text;

	char *pEnd = pStart + nChars - 1;

	while (pStart < pEnd) {

		char save = *pStart;
		*pStart = *pEnd;
		*pEnd = save;

		pStart++;
		pEnd--;
	}

	cout << text << endl;

	return 0;
}

