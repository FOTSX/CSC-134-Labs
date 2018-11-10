/////////////////////////////////////////////////////////////////////////////////////
//                                                                     
// Filename: header.h
// Date: Nov 7, 2018
// Programmer: Shengkai Xu
//
// Description:
//    This program to a program to analyze the 
//    marital status of the combined total of men and women in the US.
// 
/////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////////
//
// Class: header
//                                                                   
// Description:
//    All preloaded functions and namespace for main function
/////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
#include<fstream>
#include<iostream>
#include<string>

using namespace std;

const int NUM_HEADINGS = 13;
const int NUM_CATEGORIES = 10;
const int NUM_COMBINED_PERC = 5;
const int NUM_PERCENTAGE = 11;

void read_data(
	ifstream &input, 
	string tableHeadings[], 
	string categories[], 
	double catPerc[][NUM_PERCENTAGE]);

void analyze_stats(
	double catPerc[][NUM_PERCENTAGE],
	double combinedPerc[],
	int &high_cnt,
	int &norm_cnt,
	int &low_cnt,
	double &highest,
	double &lowest);

void display_results(
	string categories[], 
	double combinedPerc[], 
	int high_cnt, 
	int norm_cnt, 
	int low_cnt, 
	double highest, 
	double lowest);


