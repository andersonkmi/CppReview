#ifndef STASH_HPP_
#define STASH_HPP_

class Stash {
public:
	Stash(int size);
	virtual ~Stash();
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

#endif /* STASH_HPP_ */
