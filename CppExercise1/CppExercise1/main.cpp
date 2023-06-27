//
//  main.cpp
//  CppExercise1
//
//  Created by Anderson Keiji Matsuki Ito on 26/06/2023.
//

#include <iostream>
#include <string>
#include "Stash.hpp"

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
    return 0;
}
