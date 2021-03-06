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
//		largest num > 175, smallest num < 175
//		calculate average and show laregst and smallest num
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
	// The path to the file with integers
	const string FILE_PATH = "integers.dat";

	// The testing integer
	const int TEST_INT = 175;

	// Open file
	ifstream inData;
	inData.open(FILE_PATH);

	if (!inData.is_open()) 
	{
		cout << "ERROR, input file could not be opened!\n";
		return 1;
	}

	int input_num = 0;

	int sum_allint = 0;
	int even_count = 0;
	int odd_count = 0;
	int even_sum = 0;
	int odd_sum = 0;
	int largest = 0;
	int smallest = 0;

	cout << "Processing data from \" integers,dat\", Please wait"; //Wait
	for (int i = 0; i < 10; i++) //for loop dots loading
	{
		Sleep(100);
		cout << ".";
	}
	cout << "\n \n";

	// Read the file and calculate
	cout << "Integers greater or equal to " << TEST_INT << ": \n";
	while (inData >> input_num)
	{
		// Check
		if (input_num >= TEST_INT) 
		{
			cout << input_num << " ";
			if (input_num % 2 == 0) 
			{
				even_count++;
			}
			if (largest < input_num) 
			{
				largest = input_num;
			}
		}
		// Check
		if (input_num > TEST_INT && input_num % 2 != 0) 
		{
			odd_count++;
		}
		// Sum even integers
		if (input_num % 2 == 0) 
		{
			even_sum += input_num;
		}
		else 
		{
			// Sum odd integers
			odd_sum += input_num;
		}
	}

	cout << "\n\n"; //Blank

	// Clear the stream and return to beginning.
	inData.clear();
	inData.seekg(0, ios::beg);

	// Read the file and display num < TEST_INT(175) || num >= TEST_INT(175)
	input_num = 0;
	cout << "Integers less than " << TEST_INT << ": \n";
	while (inData >> input_num)
	{
		if (input_num < TEST_INT)
		{
			cout << input_num << " ";

			// Test for smallest
			if (input_num < smallest)
			{
				smallest = input_num;
			}
		}
	}

	cout << "\n\n";

	// End of file reached. Clear the stream and return to beginning
	inData.clear();
	inData.seekg(0, ios::beg);


	// Display even num >= TEST_INT(175)
	cout << "Number of even integers greater or equal to " 
		<< TEST_INT << ": \n" << even_count << "\n\n";

	// Display odd num > TEST_INT(175)
	cout << "Number of odd integers greater than " 
		<< TEST_INT << ": \n" << odd_count << "\n\n";

	// Display sum of even num > TEST_INT(175)
	cout << "Sum of all even integers: \n" 
		<< even_sum << "\n\n";

	// Display sum of odd num
	cout << "Sum of all odd integers: \n" 
		<< odd_sum << "\n\n";

	//Display sum of all int
	cout << "Sum of all integers are:" << even_sum + odd_sum << "\n\n";

	// Display largest num < TEST_INT(175)
	cout << "The largest integer greater or equal to " 
		<< TEST_INT << ": \n" << largest << "\n\n";

	// Display smallest num < TEST_INT(175)
	cout << "The smallest integer less than " 
		<< TEST_INT << ": \n" << smallest << "\n\n";

	// Display the average of the smallest and largest num (set precison 2)
	cout << "The average of the smallest and largest integers is: \n" 
		<< fixed << setprecision(2) << (float)smallest + (float)largest / 2 << "\n\n";

	system("pause");
	return 0;
}
