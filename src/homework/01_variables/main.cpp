//write include statements
#include "variables.h"
#include <iostream>


//write namespace using statement for cout
/*
using std::cout;
using std::cin;
*/
using namespace std;
using std::endl;

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	double meal_amount;
	double tip_rate;
	double tip_amount;
	double total;

	cout<< "Please enter how much your meal cost without extra symbols: (For example, a meal of $24.45 should be entered as 24.45) \n";
	//cout<< "For example: 24.45 \n";
	cin>> meal_amount;
	total = get_sales_tax_amount(meal_amount) + meal_amount;

	cout<< "\nPlease enter your tip rate as a decimal: (For example, a tip of 15% should be entered as 0.15) \n";
	//cout<< "If tip is 15%: 0.15 \n";
	cin>> tip_rate;
	tip_amount = get_tip_amount(meal_amount, tip_rate);
	total += tip_amount;

	cout<< "\nReceipt:\n";
	cout<< "Meal Amount: " << meal_amount << endl;
	cout<< "Sales Tax: " << get_sales_tax_amount(meal_amount) << endl;
	cout<< "Tip Amount: " << tip_amount << endl;
	cout<< "Total: " << total << endl;



	return 0;
}
