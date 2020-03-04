#include "bank_account.h"
#include <iostream>
using std::cout;using std::cin;
int main()
{

	BankAccount a = (100);
	cout << a.get_balance();

	BankAccount account(500);
	auto balance = account.get_balance();
	cout << "Balance is: " << balance;
	auto amount{ 0 };
	cout << "Enter deposit amount: ";
	cin >> amount;
	try
	{
		account.deposit(amount);
		cout << "Balance is: " << balance;
	}
	catch (Invalid e)
	{
		cout << e.get_error() << "\n";
	}


	return 0;
}