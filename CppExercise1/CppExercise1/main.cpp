//
//  main.cpp
//  CppExercise1
//
//  Created by Anderson Keiji Matsuki Ito on 26/06/2023.
//

#include <iostream>
#include <string>
#include "Stash.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Starting\n";
    Stash stash(sizeof(char) * 80);
    char buf[80] = "Anderson";
    stash.add(buf);
    std::cout << stash.count() << std::endl;
    
    for (int index =0; index < stash.count(); index++) {
        std::cout << (char*) stash.fetch(index) << std::endl;
    }
    
    // Using an int stash now
    Stash intStash(sizeof(int));
    for (int index = 0; index < 10; index++) {
        intStash.add(&index);
    }
    
    for (int index = 0; index < 10; index++) {
        std::cout << *(int*) intStash.fetch(index) << std::endl;
    }
    return 0;
}
