#include "dna.h"
#include <string>
using namespace std;
/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/

double get_gc_content(const std::string& dna)
{
    int count{0};
    for (size_t; dna.length(); i++)
    {
        if (dna.at(i) == 'G' || dna.at(i) == 'C')
        {
            count++;
        }
        
    }
    count = count/dna.length();
    return count;
    
}




/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/

std::string get_reverse_string(std::string na)
{
    std::string reverse;
    for (int i = na.length() - 1; i > 0 ; i--)
    {
        reverse += na[i];
    }
    return reverse;
    
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

std::string get_dna_complement(std::string a)
{
    string str = get_reverse_string(a);
    for (size_t; i >= 0 ; i--)
    {
        if (str[i] == 'A')
        {
            str[i] = 'T';
        }
        if (str[i] == 'T')
        {
            str[i] = 'A';
        }
        if (str[i] == 'G')
        {
            str[i] = 'C';
        }
        if (str[i] == 'C')
        {
            str[i] = 'G';
        }
        
    }
    return str;
}

