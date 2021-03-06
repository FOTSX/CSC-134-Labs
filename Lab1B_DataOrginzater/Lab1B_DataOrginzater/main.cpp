/////////////////////////////////////////////////////////////////////////////////////
//                                                                     
// Filename: main.cpp
// Date: August 28, 2018
// Programmer: Shengkai Xu
//
// Description:
//    This program using gaven data transfer orginzated format into txt file. 
//    
/////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////////
//
// Class: main function
//                                                                   
// Description:
//    Function read and check the input of tax rate type.
//    It giving order to run other function codes according to the input value.
// 
/////////////////////////////////////////////////////////////////////////////////////

#include "pch.h"
#include "Header.h"


int main()
{
	ifstream inData("employeeData.txt");

	if (!inData.is_open())
	{
		cout << "ERROR, input file could not be opened! \n";
		return 1;
	}
	
	ofstream outData("employee_summary.txt");
	
	if (!outData.is_open())
	{
		cout << "ERROR, output file could not be opened! \n";
		return 1;
	}


	// listing variables
	string lastname;
	string firstname;
	char gender;

	float current_salary = 0.0;
	float updated_salary = 0.0;
	float incrase_rate = 0.0;
	float bonus = 0.0;

	string inputStr = "";

	outData << " "
		<< "LAST NAME" << setw(15) //header
		<< "FIRST NAME" << setw(10)
		<< "GENDER" << setw(20)
		<< "CURRENT SALARY" << setw(22)
		<< "UPDATED SALARY" << setw(12)
		<< "BONUS" << endl;
	
	while (inData >> firstname >> lastname >> gender >> current_salary >> incrase_rate >> bonus)
	{
		updated_salary = current_salary + (current_salary * (incrase_rate / 100));

		outData << " "
			<< lastname << setw(18) //data output, summary info
			<< firstname << setw(8)
			<< string(1, gender) << setw(10)
			<< "$" << setprecision(2) << fixed << current_salary << setw(14)
			<< "$" << setprecision(2) << fixed << updated_salary << setw(13)
			<< "$" << setprecision(2) << fixed << bonus << endl;
	}

	inData.close();
	outData.close();
	cout << "Done!" << endl;
	return 0;

}

