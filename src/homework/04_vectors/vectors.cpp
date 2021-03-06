#include "vectors.h"
using namespace std;
#include <iostream>
/*
Write a value return function get_max_from_vector with a const reference
vector of intsparameter that returns the max value in a vector

@param numbers is a const reference to a vector of integers
@return the max value in the vector
*/
int get_max_from_vector(const std::vector<int>& numbers)
{
	int max{ numbers[0] };
	for (size_t i = 0; i < numbers.size(); i++)
	{
		if (numbers[i] > max)
		{
			max = numbers[i];
		}

	}
	return max;

}
	/*
Write a function named is_prime with an integer parameter that
given a number returns true if prime or false if not prime

@param number: Any whole number
@return: bool if prime False if not
*/
	bool is_prime(int number)
	{
		bool n = true;
		int i;
		i = 2;
		while (i < number) {
			if (number%i == 0) {
				n = false;
				return n;
			}

			i++;
		}
		return n;

	}

	


/*
Write a a function named vector_of_primes with an integer parameter
that given a number returns all the prime numbers up to the number

Example given number 10 returns a vector with elements 2,3,5,7,

@param int integer value
@return vector of ints containing prime values up to a value

Make sure to use the is_prime function to determine if current 
number is prime.
*/

	vector<int> vector_of_primes(int number)
	{
		int i;
		vector<int> primes;

		for (i = 2; i < number; i++)
		{
			if (is_prime(i))

				primes.push_back(i);
		}

		return primes;
	}

