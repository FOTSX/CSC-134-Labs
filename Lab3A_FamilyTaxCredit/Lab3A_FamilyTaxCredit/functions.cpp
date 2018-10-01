/////////////////////////////////////////////////////////////////////////////////////
//                                                                     
// Filename: functions.cpp
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
// Class: functions
//                                                                   
// Description:
//    Function for main.cpp, which gives main funtioncs clear look.
// 
/////////////////////////////////////////////////////////////////////////////////////


#include "pch.h"
#include "header.h"


void getnumChildren(int& a) //a value-returning function asking for num_children
{
	cout << "How many children is in your family? \n";

	while (true)
	{
		cin >> a;
		if (a > 0)
		{
			cout << "You have " << a << " children in your family, Awesome!" << endl;
			break;
		}
		else
		{
			cout << "ERROR, Please type in vaild number! \n" << endl;
			cin.clear();
			cin.ignore(100,'\n');
			continue;
		}
	}
}



void getIncome(double& b) //a value-returning function asking for income.  
{
	cout << "What is your annual income? \n";

		while (true)
		{
			cin >> b;
			if (b > 0)
			{
				cout << "Your annual income is " << b << " , good job! \n" << endl;
				break;
			}
			else
			{
				cout << "ERROR, Please type in vaild number! \n";
				cin.clear();
				cin.ignore(100,'\n');
				continue;
			}
		}
}



void clacCredit(int& children, double& income, double& credit)
{
	if (income < 70000.00) //income is samller than $70,0000, with more than 4 kids
	{
		credit = children * 1000.00;
	}

	else if (income >= 70000.00) //income is greater than $70,000, with more than 4 kids
	{
		credit = 4000.00;
		cout << "According to your gaven income in your family, your max tax credit is $4000."<< endl;
	}

	else
	{
		cout << "ERROR" << endl;
 	}
}