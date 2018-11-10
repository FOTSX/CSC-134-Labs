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
// Class: main function
//                                                                   
// Description:
//    Functions includes: 
//			- read_data
//				- tableHeadings
//				- categories
//				- calcPerc  NOTE:(Ignore age range 60-64 in calculation)
//			
//			- analyze_stats
//			 
//			- display_results		
//					
/////////////////////////////////////////////////////////////////////////////////////

#include "pch.h"
#include "header.h"

void read_data(
	ifstream &input,
	string tableHeadings[],
	string categories[],
	double catPerc[][NUM_PERCENTAGE])
{
	string title;
	getline(input, title); //first line of txt
	for (int i = 0; i < NUM_HEADINGS; i++)
	{
		input >> tableHeadings[i];
	}

	int x = 0;
	while (!input.eof()) 
	{
		string sex, marital_status;
		input >> sex >> marital_status;
		for (int i = 0; i < NUM_PERCENTAGE; i++)
		{
			input >> catPerc[x][i];
		}
		categories[x];
		x++;
	}

}

void analyze_stats(
	double catPerc[][NUM_PERCENTAGE],
	double combinedPerc[], 
	int &high_cnt,
	int &norm_cnt,
	int &low_cnt,
	double &highest,
	double &lowest)
{
	highest = 0.0;
	lowest = DBL_MAX;

	for (int i = 0; i < NUM_COMBINED_PERC; i++) 
	{
		/*
		Index 0 Single men
		Index 1 Married men
		Index 2 Separated men
		Index 3 Divorced men
		Index 4 Widowed men
		Index 5 Single women
		Index 6 Married women
		Index 7 Separated women
		Index 8 Divorced women
		Index 9 Widowed women
		*/
		double prcnt_ppl[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

		// Sum of each row by each conlum
		for (int c = 0; c < NUM_PERCENTAGE; c++) 
		{
			for (int r = 0; r < NUM_CATEGORIES; r++)
			{
				prcnt_ppl[r] += catPerc[r][c];
			}
		}

		// Sum of prcnt_ppl[a] Percentages / 10.0
		for (int a = 0; a < NUM_CATEGORIES; a++) 
		{
			prcnt_ppl[a] = prcnt_ppl[a] / 10.00;
		}

		//calculate the combined men and women averages
		combinedPerc[i] = (prcnt_ppl[i] + prcnt_ppl[i + 5]) / 2.00;

		//define representation code
		if (combinedPerc[i] >= 40.00) high_cnt++;
		else if (combinedPerc[i] >= 25.00) norm_cnt++;
		else low_cnt++;

		//find highest & lowest
		if (highest < combinedPerc[i]) highest = combinedPerc[i];
		if (lowest > combinedPerc[i]) lowest = combinedPerc[i];
	}

	
}

void display_results(
	string categories[],
	double combinedPerc[],
	int high_cnt,
	int norm_cnt,
	int low_cnt,
	double highest,
	double lowest)
{
	cout << "The number of High Representation Code: " << high_cnt << endl
		<< "The number of Normal Representation Code: " << norm_cnt << endl
		<< "The number of Low Representation Code: " << low_cnt << endl
		<< endl
		<< "The Average of men and women in each combined Marriage catergory as follow: \n"
		<< "Men Single and Women Single: " << combinedPerc[0] << endl
		<< "Men Married and Women Married: " << combinedPerc[1] << endl
		<< "Men Separated and Women Separated: " << combinedPerc[2] << endl
		<< "Men Divorced and Women Divorced: " << combinedPerc[3] << endl
		<< "Men Widowed and Women Widowed: " << combinedPerc[4] << endl
		<< endl
		<< "The Highest average in the combined category: " << highest << endl
		<< "The Lowest average in the combined category: " << lowest << endl
		<< endl;
}
