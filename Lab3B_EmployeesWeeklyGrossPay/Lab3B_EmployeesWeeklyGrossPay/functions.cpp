/////////////////////////////////////////////////////////////////////////////////////
//                                                                     
// Filename: functions.cpp
// Date: Sep 28, 2018
// Programmer: Shengkai Xu
//
// Description:
//    This program using three different functions to calculate the employee gross pay.
//
/////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////////
//
// Class: functions
//                                                                   
// Description:
//    Function for main.cpp, which gives main funtioncs clear look.
// 
/////////////////////////////////////////////////////////////////////////////////////

#include "pch.h"
#include "header.h"

void getRateAndHrs(double & workhrs, double& hourly_payrate)
{
	cout << "Enter the number of work hours in a week: ";
	while (true) //checking vaild value
	{
		cin >> workhrs;
		if (workhrs > 0.00)
		{
			cout << "You entered: " << workhrs << " hour(s)\n" << endl;
			break;
		}
		else
		{
			cout << "ERROR, Please type in vaild number! \n" << endl;
			cin.clear();
			cin.ignore(100, '\n');
			continue;
		}
	}

	cout << "Enter the number of hourly pay rate: ";
	while (true) //checking vaild value
	{
		cin >> hourly_payrate;
		if (hourly_payrate > 0)
		{
			cout << "You entered: " << hourly_payrate << " %\n" << endl;
			break;
		}
		else
		{
			cout << "ERROR, Please type in vaild number! \n" << endl;
			cin.clear();
			cin.ignore(100, '\n');
			continue;
		}
	}
}


void calcPay(double& grosspay)
{
	double a = 0.00;
	double b = 0.00;
	getRateAndHrs(a, b); //geting data from previous functions
	
	grosspay = a * (b/100); //gross pay is equal (works hours X pay rate in %)

}