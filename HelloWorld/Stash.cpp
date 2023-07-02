
#include "Stash.hpp"
#include <cstdlib>
#include <cstdio>
#include <cstring>

Stash::Stash(int size) {
	size_ = size;
	quantity_ = 0;
	storage_ = 0;
	next_ = 0;
}

Stash::~Stash() {
	// nothing to be done here
}

int Stash::add(void* element) {
	if (next_ >= quantity_) {
		inflate(100);
	}

	memcpy(&(storage_[next_ * size_]), element, size_);
	next_++;
	return (next_ - 1);
}

void* Stash::fetch(int index) {
	if(index >= next_) {
		return 0;
	}

	return &(storage_[index * size_]);
}

int Stash::count() {
	return next_;
}

void Stash::inflate(int increase) {
	void* v = realloc(storage_, (quantity_ + increase) * size_);
	storage_ = (unsigned char*) v;
	quantity_ += increase;
}
