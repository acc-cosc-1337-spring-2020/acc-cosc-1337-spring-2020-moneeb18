//write includes statements
#include "loops.h"
#include <iostream>
//write using statements for cin and cout
using std::cout; using std::cin;

/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
/*int main()
{
	int num;
	int result;
	cout << "Enter a number: ";
	cin >> num;


	result = factorial(num);
	cout << result;
	return 0;

}*/
int main()
{
	int choice;
	do
	{
		int num, result;
		cout << "Enter number: ";
		cin >> num;
		result = factorial(num);
		cout << "factorial of " << num << " is " << result << "\n";
		cout << "Enter 1 to continue...";
		cin >> choice;
	} while (choice==1);

	return 0;

}