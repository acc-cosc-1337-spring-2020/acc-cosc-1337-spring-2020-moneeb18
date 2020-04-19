#pragma once
#include<string>
#include <vector>
#include <iostream>
#include<ostream>
class Error
{
public:
	Error(std::string msg) : message{ msg } {}
	std::string get_message()const { return message; }


private:
	std::string message;
};