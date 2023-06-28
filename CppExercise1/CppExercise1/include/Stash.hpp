//
//  stash.hpp
//  CppExercise1
//
//  Created by Anderson Keiji Matsuki Ito on 26/06/2023.
//

#ifndef STASH_HPP__
#define STASH_HPP__

class Stash {
    int size_;
    int quantity_;
    int next_;
    unsigned char* storage_;
    void inflate(int increase);
public:
    Stash(int size);
    ~Stash();
    
    int add(void* element);
    int count();
    void* fetch(int position);
};

#endif /* stash_h */
