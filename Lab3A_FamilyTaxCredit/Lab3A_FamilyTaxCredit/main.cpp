/////////////////////////////////////////////////////////////////////////////////////
//                                                                     
// Filename: main.cpp
// Date: Sep 28, 2018
// Programmer: Shengkai Xu
//
// Description:
//    This program using three different function to calculate the total  
//    tax credit a family.
// 
/////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////////
//
// Class: main function
//                                                                   
// Description:
//    Function to calculate child tax credit.
// 
/////////////////////////////////////////////////////////////////////////////////////


#include "pch.h"
#include "header.h"


int main()
{
	int num_children = 0;
	double annual_income = 0.00;
	double total_taxcredit = 0.00;

	getnumChildren(num_children);
	getIncome(annual_income);

	clacCredit(num_children, annual_income, total_taxcredit);

	cout << "\n -- If Family annual income is over $70,000,"
		<< " max tax credits you can sumbit is $4000.($1000 per child)"
		<< "\n -- If Family annual income is less than $70,000 and you have more than 4 children in the family,"
		<< " tax credits will be $1000 per child."

		<< "\n\n According to the information you gaven: \n"
		
		<< "Children: " << num_children << endl
		<< "Income: " <<annual_income << endl
		<< "Your total tax credit: $" << total_taxcredit << endl;
	
	system("pause");
	return 0;
}
