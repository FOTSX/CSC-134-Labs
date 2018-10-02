/////////////////////////////////////////////////////////////////////////////////////
//                                                                     
// Filename: header.h
// Date: Oct 1, 2018
// Programmer: Shengkai Xu
//
// Description:
//    This program using three different functions to calculate the employee gross pay.
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
	double weekly_grosspay = 0.00;
	calcPay(weekly_grosspay);

	cout << "This weekly Gross Pay for this employee is: $" << weekly_grosspay << endl;

	system("pause");
	return 0;
}
