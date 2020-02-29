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
	vector<int> numbers{ 8, 4, 20, 88, 66, 99 };
	int choice;
	cout << "Enter 1 get max or 2 for Get primes: ";
	cin >> choice;
	if (choice == 1)
	{
		
		auto max = get_max_from_vector(numbers);
		cout << max;
	}
	else (choice == 2);
	{

		
		int number;
		cout << "Enter number: ";
		cin >> number;
		auto primes = vector_of_primes(number);
		
		for (auto prime : primes) 
		{
			cout << prime << " ";
		}
		cout << "\n";
		
	}


	return 0;
}