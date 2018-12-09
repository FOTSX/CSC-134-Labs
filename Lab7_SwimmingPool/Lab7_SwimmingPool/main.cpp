/////////////////////////////////////////////////////////////////////////////////////
//                                                                     
// Filename: main.cpp
// Date: Dec 7, 2018
// Programmer: Shengkai Xu
//
// Description:
//    This program that calculate the swimming pool using class.
// 
/////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////////
//
// Class: main SwimmingPool
//                                                                   
// Description:
//    Function calls.
// 
/////////////////////////////////////////////////////////////////////////////////////




#include "pch.h"

#include <iostream>
#include "swimming_pool.h" 
#include "main.h"

using namespace std;

int main()
{
	//cout << "The initial total number of pools in this program is " <<
		//SwimmingPool::getNumberOfPools() << endl;

	const int NUM_OF_POOLS = 3;
	SwimmingPool pools[NUM_OF_POOLS];

	pools[0] = SwimmingPool(30, 15, 10);
	pools[1] = SwimmingPool(60, 25, 16);
	pools[2] = SwimmingPool(35, 20, 11);
	int waterFRate;
	int time;

	cout << "Pool data: " << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << "\n\n";
		cout << "POOL # " << i + 1 << ": " << endl;
		cout << "  Length: " << pools[i].getLength() << endl;
		cout << "  Width: " << pools[i].getWidth() << endl;
		cout << "  Depth: " << pools[i].getDepth() << endl;

		cout << "  Total water in the pool: " <<
			pools[i].getTotalWaterInPool() << endl;

		cout << "To completely fill the pool: " << endl;
		cout << "  Enter water fill in rate (Gallons Per Minute): ";
		cin >> waterFRate;
		cout << endl;

		pools[i].setWaterFlowRateIn(waterFRate);

		time = pools[i].timeToFillThePool();

		cout << "  Time to fill the pool is approximately: "
			<< time / 60 << " hour(s) and " << time % 60
			<< " minute(s)." << endl;
	}
	//Add 2nd Pool and 3rd Pool to create the addedPool
	cout << "\n\nThe Added Pool Data: " << endl;
	SwimmingPool addedPool = pools[2].add(pools[1]);
	cout << "  Length: " << addedPool.getLength() << endl;
	cout << "  Width: " << addedPool.getWidth() << endl;
	cout << "  Depth: " << addedPool.getDepth() << endl;

	cout << "  Total water in the pool: " <<
		addedPool.getTotalWaterInPool() << endl;

	//Subtract the 3rd Pool from the 2nd Pool to create the subPool
	cout << "\n\nThe Subtracted Pool Data: " << endl;
	SwimmingPool subPool = pools[1].subtract(pools[2]);
	cout << "  Length: " << subPool.getLength() << endl;
	cout << "  Width: " << subPool.getWidth() << endl;
	cout << "  Depth: " << subPool.getDepth() << endl;

	cout << "  Total water in the pool: " <<
		subPool.getTotalWaterInPool() << endl;

	SwimmingPool extraPool(20, 10, 5);
	cout << "\n\n\nThe total number of pools created in this program is "
		<< extraPool.getNumberOfPools() << endl;

	system("pause");
	return 0;
}
