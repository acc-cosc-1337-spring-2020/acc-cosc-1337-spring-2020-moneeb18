/*
use a vector of int with values 8, 4, 20, 88, 66, 99

Prompt user for 1 for Get Max from vector and 2 for Get primes.
Prompt user for a number and return max value or list of primes
and display them to screen.
Program continues until user decides to exit.

*/
#include "vectors.h"
using namespace std;
#include <iostream>


int main() 
{
	int choice;
	cout << "Enter 1 get max or 2 for Get primes: ";
	cin >> choice;
	if (choice == 1)
	{
		string get_max_from_vector;
		cout << "Eneter numbers: ";
		cin >> get_max_from_vector;
		max = get_max_from_vector(get_max_from_vector);
		cout << max;
	}
	else (choice == 2);
	{

		string is_prime;
		string vector_of_primes;
		cout << "Enter number: ";
		cin >> is_prime;
		primenum = is_prime(vector_of_primes);
		cout << primenum;
		
	}


	return 0;
}