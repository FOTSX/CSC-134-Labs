/////////////////////////////////////////////////////////////////////////////////////
//                                                                     
// Filename: header.h
// Date: Oct 25, 2018
// Programmer: Shengkai Xu
//
// Description:
//    This program to generate a report based on input received from a text file.
// 
/////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////////
//
// Class: header
//                                                                   
// Description:
//    All preloaded functions for main function
/////////////////////////////////////////////////////////////////////////////////////


#include "pch.h"
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

namespace stdGrade
{
	enum letter_grade { A, A_PLUS, A_MINUS, B, B_PLUS, B_MINUS, C, C_PLUS, C_MINUS, D, D_PLUS, D_MINUS, F };
}

using namespace stdGrade;

string convertToText(letter_grade grade);

letter_grade deriveGrade(double average);