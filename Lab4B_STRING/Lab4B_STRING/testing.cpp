#include<iostream>
#include<fstream>

using namespace std;

string removePunctuations(string word)
{
	string RP_Word = word;

	while (true)
	{
		if (RP_Word.size() == 0)
			break;

		switch (RP_Word.at(RP_Word.size() - 1))
		{
			//remove last character when punctuation appear
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

	return newString;
}


int getNonVowelCount(string &word)
{
	for (int i = 0; i < word.size(); i++)
	{
		int redo;

		switch (word.at(i))
		{
		case 'a':
			break;

		case 'e':
			break;

		case 'i':
			break;

		case 'o':
			break;

		case 'u':
			break;

		case 'A':
			break;

		case 'E':
			break;

		case 'I':
			break;

		case 'O':
			break;

		case 'U':
			break;

		default: 
			return redo;
		}
	}

}


void processFile(ifstream &inFile, string &word, int &wordCount, int &nonVowelCount)
{
	string curWord;

	while (!inFile.eof())
	{
		inFile >> curWord;

		string noPunctuation = removePunctuations(curWord);

		if (noPunctuation.compare(word) == 0)
			wordCount++

		nonVowelCount += getNonVowelCount(curWord);
	}
}



void displayResult(string word, int wordCount, int nonVowelCount)
{
	cout << "\n\nWord: " << word << endl;

	cout << "Word Count: " << wordCount << endl;

	cout << "Non Vowel Count: " << nonVowelCount << endl;
}



int main()
{
	ifstream input;
	input.open("paragraph.dat");

	string word = "";
	int wordCount = 0;
	int nonVowelCount = 0;

	cout << "Enter a word to search in the file." << endl;

	cin >> word;

	processFile(input, word, wordCount, nonVowelCount);
	displayResult(word, wordCount, nonVowelCount);

	cin.get();

	return 0;
}