//savings_account.h
#include "bank_account.h"
class SavingsAccount : public BankAccount
{
public:
	SavingsAccount() = default;
	explicit SavingsAccount(int b) : BankAccount(b) {}
	int get_balance()const { return 5000; }
};































/*class SavingAccount : public BankAccount
{
public:
	SavingAccount() = default;
	explicit SavingAccount (int b): BankAccount(b){}
	int get_balance()const { return 5000; }
};*/