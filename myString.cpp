#include "myString.h"
#define lengPlus 16 //So ki tu cong them moi lan

myString::myString()
{
	this->capacity = lengPlus - 1;
	this->size = 0;
	this->string = new char[lengPlus];
	this->string[0] = NULL;
}

myString::myString(size_t leng)
{
	this->capacity = leng + lengPlus - 1;
	this->size = 0;
	this->string = new char[leng + lengPlus];
	this->string[0] = NULL;
}

void myString::strCopy(const myString& src)
{
	this->size = src.size;
	this->capacity = src.capacity;
	this->string = new char[capacity];
	for (size_t i = 0; i <= src.size; i++)
	{
		this->string[i] = src.string[i];
	}
}

void myString::strCopy(int& cap)
{
	myString temp(cap*lengPlus);
	temp.strCopy(*this);
	this->capacity += lengPlus;
	this->string = new char[capacity];
	this->strCopy(temp);
	cap++;
}

myString& myString::operator=(const char* s)
{
	int i = 0;
	int cap = 0;
	while (s[i] != '\0')
	{
		if (i == this->capacity)
		{
			this->strCopy(cap);
		}
		this->string[i] = s[i];
		this->size++;
		i++;
	}
	this->string[i] = '\0';
	return *this;
}

char myString::operator[](const size_t& index)
{
	if (index < this->size)
	return this->string[index];
}

myString::~myString()
{
	if (this->size >= 0)
	{
		delete[] string;
	}
}

size_t myString::getLength()
{
	return this->size;
}

size_t myString::getSize()
{
	return this->size;
}

size_t myString::getCapacity()
{
	return this->capacity;
}

size_t myString::maxSize()
{
	return MAX_SIZE;
}
