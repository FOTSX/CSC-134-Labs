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
// Class: Account.h
//                                                                   
// Description:
//    Account class
// 
/////////////////////////////////////////////////////////////////////////////////////

//#pragma comment(lib, "windowscodecs.lib")
#include "pch.h"
#include "header.h"

class Account
{
private:
static int genId;
	int accountId;
	double balance;
	double annualInterestRate;

public:
	Account();

	Account(int id, double bal, double interest);

	void setAccountId(int x);
	// Function to set accountId based on passed parameter.
	// Postcondition: accountId = x;

	void setBalance(double x);
	// Function to set balance based on passed parameter.
	// Postcondition: balance = x;

	void setInterest(double x);
	// Function to set annualInterestRate based on passed parameter.
	// Postcondition: annualInterestRate = x;

static int getGenId();
	//Function to get genId.
	//Postcondition: getId is returned.
	
	int getAccountId();
	// Function to get accountId.
	// Postcondition: accountId is returned.

	double getBalance();
	// Function to get balance.
	// Postcondition: balance is returned.

	double getInterest();
	// Function to get annualInterestRate.
	// Postcondition: annualInterestRate is returned.

	double getMonthlyInterestRate();
	// Function to calculate the monthly interest rate.
	// Postcondition: Monthly interest rate is calculated and returned.

	double getMonthlyInterest();
	// Function to calculate the amount that would be earned through monthly interest.
	// Postcondition: Amount that will be earned through monthly interest is calculated and returned.

	bool withdraw(double amount);
	// Function to reduce the account's current balance by the passed parameter, but only if the balance 
	// is greater than the passed in parameter.  If successful, return true, otherwise return false.
	// Postcondition: if (balance > amount) balance = balance - amount and return true;
					// otherwise return false;

	void deposit(double amount);
	// Function to increase the account's current balance by the passed parameter.
	// Postcondition: balance = balance + amount;

};
