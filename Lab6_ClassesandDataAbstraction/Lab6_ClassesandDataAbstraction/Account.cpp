/////////////////////////////////////////////////////////////////////////////////////
//                                                                     
// Filename: main.cpp
// Date: Nov 23, 2018
// Programmer: Shengkai Xu
//
// Description:
//    This program that creates an array of 10 Account objects.
//		User can use array of 10 object to browsing the account infomation.
// 
/////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////////
//
// Class: Account.cpp
//                                                                   
// Description:
//    All account functions.
// 
/////////////////////////////////////////////////////////////////////////////////////

#include "pch.h"
#include "Account.h"

Account::Account()
{
	accountId = 0;
	balance = 100;
	annualInterestRate = 1.5;
	//genId = accountId;
}

Account::Account(int id, double bal, double interest)
{
	accountId = id;
	balance = bal;
	annualInterestRate = interest;
	//genId = accountId;
}

void Account::setAccountId(int x)
{
	if (x > 9 || x < 0)
	{
		cout << "Error, your Account ID need to be between 0 to 9 \n";
	}
	else
	{
		accountId = x;
	}
}

void Account::setBalance(double x)
{
	if (x > 200.00 || x < 100.00)
	{
		cout << "Error, your Balance need to be between 100.00 to 200.00 \n";
	}
	else
	{
		balance = x;
	}
}

void Account::setInterest(double x)
{
	if (x > 1.5 || x < 5.0)
	{
		cout << "Error, your Annual Interest Rate need to be between 1.5 to 5.0 \n";
	}
	else
	{
		balance = x;
	}
}

/*int Account::getGenId()
{
	return genId;
}
*/

int Account::getAccountId()
{
	return accountId;
}

double Account::getBalance()
{
	return balance;
}

double Account::getInterest()
{
	return annualInterestRate;
}

double Account::getMonthlyInterestRate()
{
	return getInterest() / 12;
}

double Account::getMonthlyInterest()
{
	return getMonthlyInterestRate() * getBalance();
}

bool Account::withdraw(double amount)
{
	if (getBalance() > amount) 
	{
		balance = balance - amount;
		return true;
	}
	return false;
}

void Account::deposit(double amount)
{
	if (amount > 0)
	{
		balance += amount;
	}
	else
	{
		cout << "Error, amount can not be less than 0 \n";
	}	
}

