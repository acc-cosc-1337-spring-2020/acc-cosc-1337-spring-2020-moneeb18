//bank_account
#include<string>
#include<iostream>

#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H

class BankAccount
{
public:
	BankAccount() = default;
	explicit BankAccount(int b) : balance{ b } {}
	virtual int get_balance() const = 0;
	void deposit(int amount);
	void withdraw(int amount);
	void open(int amount);
	double get_rate() const { return rate; }
	friend void display_balance(const BankAccount& b);
	friend std::ostream& operator<<(std::ostream& out, const BankAccount& b);
	friend std::istream& operator>>(std::istream& in, BankAccount& b);

protected:
	int balance{ 0 };

private:
	const int min_balance_to_open{ 25 };
	static double rate;
	static double init_rate() { return .025; }
};

#endif

#ifndef INVALID_H//header guards
#define INVALID_H

class Invalid
{
public:
	Invalid(std::string msg) : message{ msg } {}
	std::string get_error()const { return message; }
private:
	std::string message;
};

#endif



































/*#include <string>
#include <iostream>

class BankAccount
{
	
public:
	BankAccount() = default;
	explicit BankAccount(int b):balance { b }{ }  
	virtual int get_balance()const { return balance; } 
	void deposit(int amount);
	void withdraw(int amount);
	void open(int amount);
	double get_rate() { return rate; }
	friend void display_balance(const BankAccount& b);
	friend std::ostream& operator<<(std::ostream & out, const BankAccount& b);
	friend std::istream& operator >>(std::istream& in, BankAccount& b);


private:
	int balance{ 0 };
	const int min_balance_to_open{ 25 };
	static double rate;
	static double init_rate() { return .025; }
};

class Invalid
{
public:
	Invalid(std::string msg):message{msg}{}
	std::string get_error()const { return message; }
private:
	std::string message;
};*/