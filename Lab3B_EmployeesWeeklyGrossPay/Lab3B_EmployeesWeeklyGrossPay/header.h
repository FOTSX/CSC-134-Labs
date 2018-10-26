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

void getRateAndHrs(double& workhrs, double& hourly_payrate);

void calcPay(double & grosspay);