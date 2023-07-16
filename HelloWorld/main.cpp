//============================================================================
// Name        : HelloWorld.cpp
// Author      : Anderson Ito
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C, Ansi-style
//============================================================================

#include <iostream>
#include <cstdlib>
#include "StashMkIV.hpp"

using namespace std;

int main(int argc, char* argv[]) {
	// Creating an int stash object
	StashMkIV* intStash = new StashMkIV(sizeof(int));
	for (int i = 0; i < 100; i++) {
		intStash->add(&i);
	}

	for (int index = 0; index < intStash->count(); index++) {
		std::cout << *(int*) intStash->fetch(index) << std::endl;
	}

	delete(intStash);
	return EXIT_SUCCESS;
}
