#include "ref_pointers.h"
#include<iostream>


using std::cout;
int main() 
{
	int r = 0, p = 0;
	int& ref_r = r;
	
	cout << "Address of r: " << &r<<"\n";
	cout << "Value of r" << r<<"\n";
	cout << "Adress of ref_r" << &ref_r<<"\n";


	int* ptr_p = &p;
	cout <<"\n"<< "Address of P: " << &p;
	cout <<"\n"<< "Value of p " <<p<< "\n";
	cout << "\n" << "Address of ptr_p: " << &ptr_p<<"\n";



	cout << "Address of ptr_p " << ptr_p << "\n";
	cout << "Value of ptr_p points to: " << *ptr_p;


	*ptr_p = 15;
	cout << "\n"<<*ptr_p;
	cout << "\n" << p;

	return 0;
}