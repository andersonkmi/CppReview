
#include <StashMkII.hpp>
#include <cstdlib>
#include <cstring>

StashMkII::StashMkII(int size) {
	size_ = size;
	quantity_ = 0;
	storage_ = 0;
	next_ = 0;
}

StashMkII::~StashMkII() {
	if (storage_) {
        free(storage_);
    }
}

int StashMkII::add(void* element) {
	if (next_ >= quantity_) {
		inflate(100);
	}

	memcpy(&(storage_[next_ * size_]), element, size_);
	next_++;
	return (next_ - 1);
}

void* StashMkII::fetch(int index) {
	if(index >= next_) {
		return 0;
	}

	return &(storage_[index * size_]);
}

int StashMkII::count() {
	return next_;
}

void StashMkII::inflate(int increase) {
	void* v = realloc(storage_, (quantity_ + increase) * size_);
	storage_ = (unsigned char*) v;
	quantity_ += increase;
}
