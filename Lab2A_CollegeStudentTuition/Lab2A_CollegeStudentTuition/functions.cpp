/////////////////////////////////////////////////////////////////////////////////////
//                                                                     
// Filename: functions.cpp
// Date: Sep 11, 2018
// Programmer: Shengkai Xu
//
// Description:
//    This program using table data to help calculates the college tuition fee.
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

float instate_cal()
{
	cout << "You chose In State Tuition \n" //case 1 with instate tuition
		<< "Please type in number of credit hours: " << endl;
	
	float crdt_hrs = 0;
	float total_fee = 0;

	while (true)
	{
		cin >> crdt_hrs;
		cout << "\n";

		if (crdt_hrs > 0)
		{
			cout << "+ $76 per credit \n"
				<< "+ Computer/Tech fee: $3 per credit \n"
				<< "+ Student activity fee: $35 \n"
				<< "+ Computer access fee: $85 \n" << endl;

			total_fee = crdt_hrs * 76;
			total_fee += (3 * crdt_hrs);
			total_fee += (35 + 85);

			cout << "Your fee total is: $" << total_fee << "\n" << endl;

			break;
		}

		else
		{
			cout << "ERROR, Please type in vaild credit hours! \n";
			cin.clear();
			cin.ignore(1, '/n');
			continue;
		}
	}
	return total_fee;
}

float outstate_cal()
{
	cout << "You choosed Out State Tuition \n" //case 2 with outstate tuition
		<< "Please type in number of credit hours: " << endl;

	float crdt_hrs = 0;
	float total_fee = 0;

	while (true)
	{
		cin >> crdt_hrs;
		cout << "\n";

		if (crdt_hrs > 0)
		{
			cout << "+ $268 per credit \n"
				<< "+ Computer/Tech fee: $3 per credit \n"
				<< "+ Student activity fee: $35 \n"
				<< "+ Computer access fee: $85 \n" << endl;

			total_fee = crdt_hrs * 268;
			total_fee += (3 * crdt_hrs);
			total_fee += (35 + 85);

			cout << "Your fee total is: $" << total_fee << "\n" << endl;

			break;
		}

		else
		{
			cout << "ERROR, Please type in vaild credit hours! \n";
			cin.clear();
			cin.ignore(1, '/n');
			continue;
		}
	}
	return total_fee;
}