// HUFF.cpp
//
//  Author: Vedant Gosavi , University of Toledo , EECS 2510 ( Non-Linear Data Structures) 
//	  Date: 06/05/2024
// History:	Original Version
//

//	This program implements a complete-file level end-to-end Huffman Encoding and Decoding system.


//	The program essentially works in 3 distinct modes, with 3 kinds of files to work on:
//	1) There are input files :			These could be text, binary,or any other kind of input file. These are the "raw" version of the file. 
//	2) There are output files:			These are Huffman encoded files/versions of the raw input files. Encoded files are of .huf extension. They always contain
//										information for a .htree embedded inside them. (See Below).
//	3) There are Tree-Builder Files :	These can be (optionally) be created to encode the file with a given (pre-built) Huffman Tree.
//										These will always be 510 bytes. Their extension for now is .htree
//
//	We utilize the command line terminal prompt for this program to provide its usecase.
//	The first parameter indicates the mode of the program ("-me","-md","-mt", or "-met") valid parameters
//	"-e" is used to encode the input raw file, with a tree created FROM the raw file.
//	"-d" is used to decode an given encoded file.
//	

#include "Huffman.h"
#include <iostream>
#include <fstream>
#include <string>
#include <string.h>



using namespace std;

void validateCommandLineParameters(int argc, char* argv[]);			// Validates the parameters that are prompted in CL are valid for our code fuctionality.

 int main(int argc, char* argv[])
{
	//ifstream myFile;
	//myFile.open("Hamlet-Scene-1.txt", ios::binary);

	//unsigned char c; 
	//c = myFile.get();					//Priming read here
	// 
	// 
	//When we get to this point we have read all of the file. HUFF –me -i:file1 [-o:file2]
	 cout << argc << endl; 
	 cout << argv << endl;
	 validateCommandLineParameters(argc, argv);
	 Huffman huffman;
	 string fileNameline = argv[2];
	 cout << argv[2] << endl;
	if (argc < 1)
	{
		cout << "Missing filename" << endl;
		return 0;
	}
	if (strcmp(argv[1], "-me") == 0)
	{
		huffman.EncodeFile(fileNameline, fileNameline);
		cout << "function went through" << endl;
		return 0;
	}
	return 0;
}


 void validateCommandLineParameters(int argc, char* argv[])
 {	
	 //This function is going to check if the paramters inputted by the user is valid or not.
	 if (argc < 2)
	 {
		 cout << "invalid input , please enter : mode | input file name | output file name." << endl;
		 return;
	 }
	 return; 
 }
