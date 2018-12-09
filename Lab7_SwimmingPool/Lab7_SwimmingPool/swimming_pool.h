/////////////////////////////////////////////////////////////////////////////////////
//                                                                     
// Filename: swimming_pool.cpp
// Date: Dec 7, 2018
// Programmer: Shengkai Xu
//
// Description:
//    This program that calculate the swimming pool using class.
// 
/////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////////
//
// Class: SwimmingPool
//                                                                   
// Description:
//    Function Constructors.
// 
/////////////////////////////////////////////////////////////////////////////////////



#include "pch.h"

#include<iostream>
#include<string>

#include"pch.h"


class SwimmingPool
{
private:
	int num_of_pool; //static int num_of_pool;
	
	int length;
	int width;
	int depth;
	int amount; //total amount water in the pool
	int in_rate; //water flow rate in
	int out_rate; //water flow rate out
	
public:
	SwimmingPool();
	
	SwimmingPool(const SwimmingPool &copy);

	SwimmingPool(int length, int width, int depth);
	~SwimmingPool();

	SwimmingPool add(SwimmingPool);
	SwimmingPool subtract(SwimmingPool);
	
	int getLength();
	int getWidth();
	int getDepth();
	int getTotalWaterInPool(); //amount
	
	int getNumberOfPools();

	void setWaterFlowRateIn(int waterFRate);
	int timeToFillThePool();

};