/////////////////////////////////////////////////////////////////////////////////////
//                                                                     
// Filename: source.cpp
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
//    Functions
// 
/////////////////////////////////////////////////////////////////////////////////////

#include "pch.h"
#include "header.h"

string convertToText(letter_grade grade)
{
	switch (grade) 
	{
		case A:
			return "A";
			break;
		case A_PLUS:
			return "A+";
			break;
		case A_MINUS:
			return "A-";
			break;
		
		
		case B:
			return "B";
			break;
		case B_PLUS:
			return "B+";
			break;
		case B_MINUS:
			return "B-";
			break;
	
		
		case C:
			return "C";
			break;
		case C_PLUS:
			return "C+";
			break;
		case C_MINUS:
			return "C-";
			break;
	
		
		case D:
			return "D";
			break;
		case D_PLUS:
			return "D+";
			break;
		case D_MINUS:
			return "D-";
			break;
		
		case F:
		default:
			return "F";
			break;
	}
}

letter_grade deriveGrade(double average)
{
	if (average >= 97.0)
	{
		return A_PLUS;
	}
	else if (average >= 93.0 && average < 97.0) 
	{
		return A;
	}
	else if (average >= 90.0 && average < 93.0) 
	{
		return A_MINUS;
	}


	else if (average >= 87.0 && average < 90.0) 
	{
		return B_PLUS;
	}
	else if (average >= 83.0 && average < 87.0) 
	{
		return B;
	}
	else if (average >= 80.0 && average < 83.0) 
	{
		return B_MINUS;
	}


	else if (average >= 77.0 && average < 80.0) 
	{
		return C_PLUS;
	}
	else if (average >= 73.0 && average < 88.0) 
	{
		return C;
	}
	else if (average >= 70.0 && average < 73.0) 
	{
		return C_MINUS;
	}


	else if (average >= 67.0 && average < 70.0) 
	{
		return D_PLUS;
	}
	else if (average >= 63.0 && average < 67.0) 
	{
		return D;
	}
	else if (average >= 60.0 && average < 63.0) 
	{
		return D_MINUS;
	}


	else if (average >= 0.00 && average < 60.0) 
	{
		return F;
	}
	else
	{
		cout << "Somthing went wrong!";
		return F;
	}
}