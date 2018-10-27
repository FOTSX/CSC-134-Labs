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
	string ind_words;

	while (!inFile.eof()) //read until end of file
	{
		inFile >> ind_words;

		removePunctuations(ind_words);

		if (ind_words == word) //all_word.compare(word) == 0
		{
			wordCount++; //+1 counting
		}

		//get Non-Vowel words for count
		for (int i = 0; i < int(ind_words.size()); i++)
		{
			int redo = 0; //redo point

			switch (ind_words.at(i))
			{
				case 'a':
				case 'e':
				case 'i':
				case 'o':
				case 'u':
				case 'A':
				case 'E':
				case 'I':
				case 'O':
				case 'U':
				case '!':
				case '.':
				case ',':
				case ';':
				case '?':
				case ':':
				case '\'':			 
				case '\"':
					break;

				default:
					nonVowelCount++;
					break;
			}
		}
	}
}

void displayResult(string word, int wordCount, int nonVowelCount)
{
	cout << "\n\n" << setfill('-') << setw(20) << "\n" //section line
	<< "\tWord: " << word << "\n"
	<< "\tWord Count: " << wordCount << "\n"
	<< "\tNon-Vowel Count: " << nonVowelCount << endl;
}


