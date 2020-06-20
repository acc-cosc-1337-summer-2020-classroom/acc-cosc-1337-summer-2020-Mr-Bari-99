//write include statements
#include "dna.cpp"
#include <string>
#include <iostream>
//write using statements
using namespace std;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	string yes;
	string content;
	string input;
	cout<<"Enter DNA content";
	cin>>content;
	cout<<"Enter a 1 for GC content or a 2 for DNA complement";
	cin>>input;
	do
	{
		if (input == "1")
	{
		get_gc_content(content);
	}
	if (input == "2")
	{
		get_dna_complement(content);
	}
	cout<<"Enter y or Y if you're done";
	cin>>yes;
	} while (yes != "y" || yes != "Y");
	

	
	
	return 0;
}