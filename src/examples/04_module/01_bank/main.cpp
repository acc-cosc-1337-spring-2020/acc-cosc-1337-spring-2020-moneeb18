#include "bank_account.h"
#include <iostream>
using std::cout;using std::cin;
int main()
{

	BankAccount c = account + act1;
	std::cin >> account;
	cout << a.get_balance();

	BankAccount account(500), act1;
	display_balance(account);
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