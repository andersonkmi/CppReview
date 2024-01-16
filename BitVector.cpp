#include <BitVector.hpp>
#include <cstdlib>
#include <cstring>
#include <climits>
#include <cstdio>
#include <cassert>

const unsigned char highbit = 1 << (CHAR_BIT - 1);

BitVector::BitVector() {
    numBytes_ = 0;
    bits_ = 0;
    bytes_ = 0;
}

BitVector::BitVector(unsigned char* init, int size) {
    numBytes_ = size;
    bits_ = numBytes_ * CHAR_BIT;
    bytes_ = (unsigned char*) calloc(numBytes_, 1);
    assert(bytes_);
    if (init == 0) {
        return;
    }

    for (int index = 0; index < numBytes_; index++) {
        for (int offset = 0; offset < CHAR_BIT; offset++) {
            if (init[index] & (highbit >> offset)) {
                set(index * CHAR_BIT + offset);
            }
        }
    }
}

BitVector::BitVector(const char *binary) {
    bits_ = strlen(binary);
    numBytes_ = bits_ / CHAR_BIT;
    if (bits_ % CHAR_BIT) {
        numBytes_++;
    }

    bytes_ = (unsigned char*) calloc(numBytes_, 1);
    assert(bytes_);
    for (int i = 0; i < bits_; i++) {
        if (binary[i] == '1') {
            set(i);
        }
    }
}

BitVector::~BitVector() {
    free(bytes_);
}

void BitVector::set(int bit) {
    assert(bit >= 0 && bit < bits_);
    int index = bit / CHAR_BIT;
    int offset = bit % CHAR_BIT;
    unsigned char mask = (1 << offset);
    bytes_[index] |= mask;
}

int BitVector::read(int bit) {
    assert(bit >= 0 && bit <bits_);
    int index = bit / CHAR_BIT;
    int offset = bit % CHAR_BIT;
    unsigned char mask = (1 << offset);
    return bytes_[index] & mask;
}

void BitVector::clear(int bit) {
    assert(bit >= 0 && bit < bits_);
    int index = bit / CHAR_BIT;
    int offset = bit % CHAR_BIT;
    unsigned char mask = ~(1 << offset);
    bytes_[index] &= mask;
}

int BitVector::bits() {
    return bits_;
}

void BitVector::bits(int size) {
    int oldSize = bits_;
    bits_ = size;
    numBytes_ = bits_ / CHAR_BIT;
    if (bits_ % CHAR_BIT) {
        numBytes_++;
    }

    void* v = realloc(bytes_, numBytes_);
    assert(v);

    bytes_ = (unsigned char*) v;
    for (int i = oldSize; i < bits_; i++) {
        clear(i);
    }
}

void BitVector::print(const char* message) {
    puts(message);
    for (int i = 0; i < bits_; i++) {
        if (read(i)) {
            putchar('1');
        } else {
            putchar('0');
        }

        if ((i + 1) % CHAR_BIT == 0) {
            putchar(' ');
        }
    }
}