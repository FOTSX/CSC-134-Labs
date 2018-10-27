/////////////////////////////////////////////////////////////////////////////////////
//                                                                     
// Filename: header.h
// Date: Oct 26, 2018
// Programmer: Shengkai Xu
//
// Description:
//    A word search program that searches an input data file for a word specified by the user.
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
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string removePunctuations(string word);

void processFile(ifstream inFile, string &word, int &wordCount, int &nonVowelCount);

void displayResult(string word, int wordCount, int nonVowelCount);

