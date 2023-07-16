#ifndef STASH_MKV_HPP__
#define STASH_MKV_HPP__

class StashMkV {
public:
    StashMkV(int size, int initQuantity = 0);
    virtual ~StashMkV();
    
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