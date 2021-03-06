/////////////////////////////////////////////////////////////////////////////////////
//                                                                     
// Filename:main.cpp
// Date: Oct 25, 2018
// Programmer: Shengkai Xu
//
// Description:
//    This program to generate a report based on input received from a text file.
// 
/////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////////
//
// Class: main function
//                                                                   
// Description:
//    Function to organize grade to report with letter grade.
// 
/////////////////////////////////////////////////////////////////////////////////////

#include "pch.h"
#include "header.h"

int main()
{
	ifstream inData("student_grades.txt");
	if (!inData.is_open())
	{
		cout << "ERROR, input file could not be opened! \n";
		return 1;
	}

	ofstream outData("student_final.txt");
	if (!outData.is_open())
	{
		cout << "ERROR, output file could not be opened! \n";
		return 1;
	}
	
	//setting variable//
	string lastname, firstname, ssn, letter_grade; 
	double test_one, test_two, test_three, test_four, average;

	outData << " "
		<< left << setw(15) << "LAST NAME"
		<< left << setw(15) << "FIRST NAME"
		<< left << setw(16) << "SSN"
		<< left << setw(10) << "TEST1"
		<< left << setw(10) << "TEST2"
		<< left << setw(10) << "TEST3"
		<< left << setw(10) << "TEST4"
		<< left << setw(10) << "FINAL LETTER GRADE" << endl;

	while (inData >> lastname >> firstname >> ssn >> test_one >> test_two >> test_three >> test_four)
	{
		average = (test_one + test_two + test_three + test_four) / 4.0;
		
		outData << " " //data output, summary info
			<< left << setw(15) << lastname
			<< left << setw(15) << firstname
			<< left << setw(16) << ssn
			<< left << setw(10) << fixed << setprecision(2) << test_one
			<< left << setw(10) << fixed << setprecision(2) << test_two
			<< left << setw(10) << fixed << setprecision(2) << test_three
			<< left << setw(11) << fixed << setprecision(2) << test_four
			<< left << setw(10) << convertToText(deriveGrade(average))
			<< endl;
	}

	cout << "Done." << endl;

	system("pause");
	return 0;
}