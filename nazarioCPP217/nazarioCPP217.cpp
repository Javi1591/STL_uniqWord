// Nazario, Xavier
// November 15, 2025 ©
// Chapter 17 Programming Assignment
// References:
//  Gaddis, Tony. Starting Out with C++ from Control
//	 Structures Through Objects. (10th Edition). Pearson Education (US), 2022.
//  C++ Tutorial: Input/Output with Files - https://cplusplus.com/doc/tutorial/files/


// 					*** Use forChap12.txt ***

#include <iostream>
#include <fstream>
#include <string>
#include <set>
using namespace std;

// Main function starts here
int main()
{
	// Step 1: Declare variables
	//	Use fileName, word, uniqWord
	string fileName;		// Holds file name
	string word;			// Holds each word from file
	set<string> uniqWord;	// Holds unique words

	// Step 2: Prompt user for file name
	cout << "Please enter the name of the file you're looking for: " << endl;
	getline(cin, fileName);

	// Step 3: Open file
	//	ifstream infile()
	ifstream infile(fileName);

	// Validate file exists
	//	Use if statement
	if (!infile)
	{
		cout << "File does NOT exist, please try your search again." << endl;

		// return 1 to indicate error
		return 1;
	}

	// Step 4: Read words from file AND store unique words
	//	Use while loop
	//	One word at a time
	while (infile >> word)
	{
		// Store unique words in set
		uniqWord.insert(word);
	}

	// Step 5: Close file
	infile.close();

	// Step 6: Display unique words
	//  Use for loop for set of word and uniqWord
	cout << "The unique words in the file are: " << endl;
	
	//	Use w for each word in uniqWord
	for (const string& w : uniqWord)
	{
		// Display unique words
		cout << w << endl;
	}

	// Step 7: Display total number of unique words
	//	Use size() function
	cout << "The total number of unique words is: " << uniqWord.size() << endl;

	// return 0
	return 0;
}