/////////////////////////////////////////////////////////////////////////////////////
//                                                                     
// Filename: header.h
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
// Class: header
//                                                                   
// Description:
//    All preloaded functions for main function
/////////////////////////////////////////////////////////////////////////////////////


#include "pch.h" 

#include <string>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <Windows.h>

using namespace std;

void getnumChildren(int& a);

void getIncome(double& b);

void clacCredit(int& children, double& income, double& credit);
