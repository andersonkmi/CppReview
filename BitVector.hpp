#ifndef BITVECTOR_HPP__
#define BITVECTOR_HPP__

class BitVector {
public:
    BitVector();
    BitVector(unsigned char* init, int size = 8);
    BitVector(char* binary);
    ~BitVector();
    void set(int bit);
    void clear(int bit);
    int read(int bit);
    int bits();
    void bits(int size);
    void print(const char* message = "");
private:
    unsigned char* bytes_;
    int bits_;
    int numBytes_;
};

#endif
