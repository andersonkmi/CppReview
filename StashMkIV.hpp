#ifndef STASH_MKIV_HPP__
#define STASH_MKIV_HPP__

class StashMkIV {
public:
    StashMkIV(int size);
    StashMkIV(int size, int initQuantity);
    virtual ~StashMkIV();
    
    int add(void* element);
    void* fetch(int index);
    int count();
private:
    int size_;
    int quantity_;
    int next_;
    unsigned char* storage_;
    void inflate(int increase);
};

#endif