#ifndef BITVECTOR_HPP_
#define BITVECTOR_HPP_

class BitVector {
public:
    BitVector();
    explicit BitVector(unsigned char* init, int size = 8);
    explicit BitVector(const char* binary);
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
