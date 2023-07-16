#include "StashMkIV.hpp"
#include <cstring>
#include <cstdlib>
#include <cstdio>

StashMkIV::StashMkIV(int size) {
    size_ = size;
    quantity_ = 0;
    next_ = 0;
    storage_ = 0;
}

StashMkIV::StashMkIV(int size, int initQuantity) {
    size_ = size;
    quantity_ = 0;
    next_ = 0;
    storage_ = 0;
    inflate(initQuantity);
}

StashMkIV::~StashMkIV() {
    if(storage_) {
        free(storage_);
    }
}

int StashMkIV::add(void* element) {
    if (next_ >= quantity_) {
		inflate(100);
	}

	memcpy(&(storage_[next_ * size_]), element, size_);
	next_++;
	return (next_ - 1);
}

void* StashMkIV::fetch(int index) {
	if(index >= next_) {
		return 0;
	}

	return &(storage_[index * size_]);    
}

int StashMkIV::count() {
    return next_;
}

void StashMkIV::inflate(int increase) {
    void* v = realloc(storage_, (quantity_ + increase) * size_);
	storage_ = (unsigned char*) v;
	quantity_ += increase;
}