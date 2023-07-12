#ifndef STASH_MKII_HPP_
#define STASH_MKII_HPP_

class StashMkII {
public:
	StashMkII(int size);
	virtual ~StashMkII();
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

#endif /* STASH_MKII_HPP_ */
