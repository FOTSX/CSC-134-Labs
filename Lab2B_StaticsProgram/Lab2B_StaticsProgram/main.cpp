/////////////////////////////////////////////////////////////////////////////////////
//                                                                     
// Filename: main.cpp
// Date: Sep 15, 2018
// Programmer: Shengkai Xu
//
// Description:
//    This program using given .dat to display:
//		num >= 175, num < 175
//		even num >= 175, odd num > 175
//		sum of even num, sum of odd num, sum of all num
//		largest num > 175, smallest num > 175
//		calculate average and show laregst and smallest num in line 4 of .dat
//
/////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////////
//
// Class: main function
//                                                                   
// Description:
//    Function read and check the input of .dat file.
//    Calculate then display.
// 
/////////////////////////////////////////////////////////////////////////////////////

#include "pch.h"
#include "header.h"

int main()
{
	ifstream inData("integers.dat");
	if (!inData.is_open())
	{
		cout << "ERROR, input file could not be opened! \n";
		return 1;
	}

	//int variables setup
	int num_greater = 0;
	int num_smaller = 0;
	int even_sum = 0;
	int odd_sum = 0;
	int sum_even_num = 0;
	int sum_odd_num = 0;
	int largest_num = 0;
	int smallest_num = 0;
	int average = 0; //need to be two decimal place
	int num = 0;
	
	//num >= 175
	cout << "Number is greater or equal to 175: \n";
	while (inData >> num)
	{
		if (num >= 175) 
		{
			num_greater = num;
			cout << num_greater << endl;
		}
	}
	cout << endl;

	//num < 175
	cout << "Number is smaller than 175: \n";
	while (inData >> num)
	{
		if (num < 175)
		{
			num_smaller = num;
			cout << num_smaller << endl; //" is greater or equal to 175. \n";
		}
	}
	cout << endl;

	system("pause");
	return 0;
}
