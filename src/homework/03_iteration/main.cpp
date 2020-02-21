//write include statements
#include "dna.h"
//write using statements
using namespace std;
#include <iostream>

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	auto menu = 'Y';
	while (menu == 'y' || menu == 'Y') {
		cout << "Press y or Y to continue: ";
		cin >> menu;
		int choice;
		cout << "Enter 1 for GC content or 2 for Get DNA Complement: ";
		cin >> choice;
		if (choice == 1)
		{
			string gc_dna;
			cout << "Eneter dna string: ";
			cin >> gc_dna;
			double result = get_gc_content(gc_dna);
			cout << result;
		}
		else (choice == 2);
		{
			string dna_com;
			cout << "Enter DNA Complement: ";
			cin >> dna_com;
			string result = get_dna_complement(dna_com);
			cout << result;
		}
	}
	return 0;
}