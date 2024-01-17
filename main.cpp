#include <iostream>
#include <StashMkIV.hpp>
#include <BitVector.hpp>
#include <fstream>

using namespace std;

void executeStash() {
    // Creating an int stash object
    auto* intStash = new StashMkIV(sizeof(int));
    for (int i = 0; i < 100; i++) {
        intStash->add(&i);
    }

    for (int index = 0; index < intStash->count(); index++) {
        std::cout << *(int*) intStash->fetch(index) << std::endl;
    }

    delete(intStash);
}

void bitVectorTest() {
    unsigned char b[] = {
            0x0f, 0xff, 0xf0, 0xAA, 0x78, 0x11
    };

    BitVector bv1(b, sizeof b / sizeof *b);
    BitVector bv2("100101001111001010100010010010101");
    bv1.print("bv1 before modification");
    for (int i = 36; i < bv1.bits(); i++) {
        bv1.clear(i);
    }

    bv1.print("bv1 after modification");

    bv2.print("bv2 before modification");
    for (int j = bv2.bits() - 10; j < bv2.bits(); j++) {
        bv2.clear(j);
    }
    bv2.set(30);
    bv2.print("bv2 after modification");
    bv2.bits(bv2.bits() / 2);
    bv2.print("bv2 cut in half");
    bv2.bits(bv2.bits() + 10);
    bv2.print("bv2 grown by 10");
    BitVector bv3((unsigned char* ) 0);
}

void fileIostreamExample() {
    char buffer[100];
    {
        ifstream in("main.cpp");
        ofstream out("main.out");
        int i = 1;

        while (in.get(buffer, 100)) {
            in.get();
            std::cout << buffer << std::endl;
            out << i++ << ": " << buffer << std::endl;
        }
    }

    ifstream in("main.out");
    while(in.getline(buffer, 100)) {
        char* cp = buffer;
        while(*cp != ':') {
            cp++;
        }

        cp +=2;
        std::cout << cp << std::endl;
    }
}

int main(int argc, char* argv[]) {
    executeStash();
    bitVectorTest();
    // Include file iostream example
    fileIostreamExample();

	return EXIT_SUCCESS;
}