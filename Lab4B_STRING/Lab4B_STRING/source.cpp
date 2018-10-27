/////////////////////////////////////////////////////////////////////////////////////
//                                                                     
// Filename: source.cpp
// Date: Oct 25, 2018
// Programmer: Shengkai Xu
//
// Description:
//    A word search program that searches an input data file for a word specified by the user.
// 
/////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////////
//
// Class: main function
//                                                                   
// Description:
//    Functions to process file and function to display results.
// 
/////////////////////////////////////////////////////////////////////////////////////

#include "pch.h"
#include "header.h"

string removePunctuations(string word)
{
	string RP_Word = word;

	while (true)
	{
		if (RP_Word.size() == 0)
			break;

		switch (RP_Word.at(RP_Word.size() - 1)) //remove last character when punctuation appear
		{
			case '!':
				RP_Word.erase(RP_Word.size() - 1);
				break;

			case '.':
				RP_Word = RP_Word.substr(0, RP_Word.size() - 1);
				break;

			case ',':
				RP_Word = RP_Word.substr(0, RP_Word.size() - 1);
				break;

			case ';':
				RP_Word = RP_Word.substr(0, RP_Word.size() - 1);
				break;

			case '?':
				RP_Word = RP_Word.substr(0, RP_Word.size() - 1);
				break;

			case ':':
				RP_Word = RP_Word.substr(0, RP_Word.size() - 1);
				break;

			case '\'':
				RP_Word = RP_Word.substr(0, RP_Word.size() - 1);
				break;

			case '\"':
				RP_Word = RP_Word.substr(0, RP_Word.size() - 1);
				break;

			default:
				return RP_Word;
		}
	}
	return RP_Word;
}


void processFile(ifstream& inFile, string &word, int &wordCount, int &nonVowelCount)
{
	string all_words;

	while (!inFile.eof())
	{
		inFile >> all_words;

		removePunctuations(all_words);

		if (all_words == word) //all_word.compare(word) == 0
		{

		}

	}
}

void displayResult(string word, int wordCount, int nonVowelCount)
{

}
