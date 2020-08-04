// CIT125 Intro to C++ Luigi Robles
// 08-03-2020 Summer Term
// Ch.14 pg.528 Fig.14-14 Movie title Program
// Saves movie titles and release years in 
// a sequential access file

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	//declare and initialize variables
	string title = "";
	string year = "";

	//create output file object
	ofstream outFile;

	outFile.open("movies.txt", ios::out); //open sequential access file

	if (outFile.is_open()) //checking if file was opened succesfully
	{
		cout << "Movie title (-1 to stop): ";
		getline(cin, title); //input for movie title
		while (title != "-1")
		{
			cout << "Year released: ";
			getline(cin, year); //input for year released
			outFile << title << '#' << year << endl;

			cout << "Movie title (-1 to stop): ";
			getline(cin, title);
		} //end while loop
		outFile.close(); //closing file
	}
	else
		cout << "The movies.txt file could not be opened."
			<< endl;
	return 0;
} //end of main function