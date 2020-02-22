#include "dna.h"
using namespace std;
/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/
double get_gc_content(const string & dna)
{
	double gc_counter = 0;
	
	for (int i = 0; i < dna.length(); i++)
	{
		if (dna[i] == 'C' || dna[i] == 'G')
		{
			gc_counter++;
		}
	}

	double gc_content = gc_counter / dna.length();


	return gc_content;
}



/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/
string get_reverse_string(string dna)
{
	string rev = "";
	for (int i = dna.size();i >= 0;i--)
		rev += dna[i];
	return rev;
}


/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string

*/

string get_dna_complement(string dna)
{
	string s = get_reverse_string(dna);
		
	for (int i = s.size();i >= 0;i--) {
		if (s[i] == 'C')
		{
			s[i]= 'G';
		}
		else if (s[i] == 'A')
		{
			s[i]= 'T';
		}
		else if (s[i] == 'T')
		{
			s [i]= 'A';
		}
		else if (s[i] == 'G')
		{
			s [i]= 'C';
		}
		}
	return s;
	

}
