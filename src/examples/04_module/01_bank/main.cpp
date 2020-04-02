#include "bank_account.h"
#include <iostream>
#include "savings_account.h"
#include <vector>
#include <string>
#include <memory>
using std::cout;using std::cin;
using std::unique_ptr; using std::make_unique;
int main()
{
	unique_ptr<BankAccount> s = make_unique<SavingAccount>(90);
	unique_ptr<BankAccount> c = make_unique<CheckingAccount>(100);
	SavingAccount s1;
	std::vector < unique_ptr<BankAccount>accounts;
	accounts.push_back(std::move(s));
	accounts.push_back(std::move(c));
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

	for (auto &act : accounts)
	{
		cout << act->get_balance() << "\n";
	}



	SavingAccount s0;
	SavingAccount s{ 90 };
	return 0;
}