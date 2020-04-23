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
