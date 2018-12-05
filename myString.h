#ifndef __MYSTRING_H__
#define __MYSTRING_H__
#include <iostream>
#include <malloc.h>
using namespace std;
#define MAX_SIZE 4294967291

class myString
{
private:
	char* string;
	size_t size;
	size_t capacity;
	

public:
	myString();
	myString(size_t);
	myString& operator=(const char*);
	char operator[](const size_t&);

	void strCopy(int&);
	void strCopy(const myString&);
	
	size_t getCapacity();
	size_t getLength();
	size_t getSize();
	myString& resize(size_t);
	myString& resize(size_t, const char&);

	size_t maxSize();

	~myString();
};

#endif
