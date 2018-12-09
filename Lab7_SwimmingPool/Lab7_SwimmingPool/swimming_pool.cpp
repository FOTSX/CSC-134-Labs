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
//    Function calls.
// 
/////////////////////////////////////////////////////////////////////////////////////

// I keep getting lnk1120 fetal error while with static, so I commented out the line with static.
//Looking forward to learn the resolve solutions, thank you!


#include "pch.h"

#include "swimming_pool.h"

SwimmingPool::SwimmingPool()
{
}

SwimmingPool::SwimmingPool(const SwimmingPool &copy)
{
	length = copy.length;
	width = copy.width;
	depth = copy.depth;
	in_rate = copy.in_rate;
	out_rate = copy.out_rate;
	amount = copy.amount;
	//num_of_pool++;
}

SwimmingPool::SwimmingPool(int length, int width, int depth) //constructor
{
	this->length = length;
	this->width = width;
	this->depth = depth;
	this->amount = 0;
	//num_of_pool++;
}

SwimmingPool::~SwimmingPool() //destructor
{
	//num_of_pool--;
}

SwimmingPool SwimmingPool::add(SwimmingPool subpool)
{
	SwimmingPool *new_pool = new SwimmingPool(
		this->getLength() + subpool.getLength(),	
		this->getWidth() + subpool.getWidth(),
		this->getDepth() + subpool.getDepth());

	new_pool->setWaterFlowRateIn(this->in_rate + subpool.in_rate);
	
	return *new_pool;
}

SwimmingPool SwimmingPool::subtract(SwimmingPool subpool)
{
	SwimmingPool *new_pool = new SwimmingPool(
		this->getLength() - subpool.getLength(),
		this->getWidth() - subpool.getWidth(),
		this->getDepth() - subpool.getDepth());

	new_pool->setWaterFlowRateIn(this->in_rate - subpool.in_rate);

	return *new_pool;
}

int SwimmingPool::getLength()
{
	return length;
}

int SwimmingPool::getWidth()
{
	return width;
}

int SwimmingPool::getDepth()
{
	return depth;
}

int SwimmingPool::getTotalWaterInPool()
{
	return amount;
}


int SwimmingPool::getNumberOfPools()
{
	return num_of_pool;
}


void SwimmingPool::setWaterFlowRateIn(int waterFRate)
{
	in_rate = waterFRate;
}

int SwimmingPool::timeToFillThePool()
{
	return (getLength() * getWidth() * getDepth()) / (in_rate);
}
