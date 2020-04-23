#include "vector.h"
#include <iostream>
Vector::Vector(size_t sz)
	:size{sz}, nums{new int [sz]}
{
	for (size_t i=0;i<sz;++i)
	{
		nums[i] = 0;
	}
}

Vector::Vector(const Vector & v)
	: size{ v.size }, nums{new int[v.size]}
{
	for (size_t i = 0; i < size; ++i)
	{
		nums[i] = v[i];
	}
}

Vector & Vector::operator=(const Vector & v)
{
	int* temp = new int[v.size];
	for (size_t i = 0; i < v.size; ++i)
	{
		temp[i] = v[i];
	}
	delete nums;
	nums = temp;
	size = v.size;

	return *this;
}

Vector::~Vector()
{
	std::cout << "\nrelease memory\n";
	delete[] nums;
}


void use_vector()
{
	Vector* v1 = new Vector(3);
	delete v1;
	v1 = nullptr;
}
