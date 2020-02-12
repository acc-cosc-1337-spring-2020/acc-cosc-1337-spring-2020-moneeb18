#include "while.h"

using std::cout; using std::cin;
int main() 
{
	int num, sum;
	cout << "Enter number: ";

	cin >> num;

	sum = sum_of_squares(num);
	cout << "Sum of squares for " << num << " is " << sum;
	return 0;
}