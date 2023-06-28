#include <Stash.hpp>
#include <stdio.h>
#include <cstdio>
#include <cstdlib>
#include <cstring>

Stash::Stash(int size) {
    size_ = size;
    quantity_ = 0;
    storage_ = 0;
    next_ = 0;
}

Stash::~Stash() {
    if(storage_) {
        puts("Freeing storage");
        free(storage_);
    }
}

int Stash::add(void* element) {
    if (next_ >= quantity_) {
        inflate(1000);
    }
    memcpy(&(storage_[next_ * size_]), element, size_);
    next_++;
    return (next_ - 1);
}

int Stash::count() {
    return next_;
}

void* Stash::fetch(int position) {
    if(position >= next_ || position < 0) {
        return 0;
    }
    
    return &(storage_[position * size_]);
}

void Stash::inflate(int increase) {
    void* v = realloc(storage_, (quantity_ + increase) * size_);
    storage_ = (unsigned char*) v;
    quantity_ += increase;
}
