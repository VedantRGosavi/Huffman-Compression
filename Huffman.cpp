// This file is the working of the method definitions given in the Huffman.h file
#pragma once
#include <string>
#include <fstream>
#include <iostream>
#include "Huffman.h"


using namespace std;

//Public:
void Huffman::DisplayHelp()
{
	return; 
}

void Huffman::EncodeFile(string inputFile, string outputFile)
{
	cout << "Input file name is : " << inputFile << endl;
	return;
}


//Private: 
void Huffman::buildFrequencyCounts(string fileName)
{
	// This function reads fileName, one byte at a time, and fills the freqCounts[] array with the number of
	//occurences of each ASCII value. i.e example:  if file consists of --> "AABBBBCC" - 65 : 2 , 66: 4, 67: 2
	//
	// WE have deteremined that the fileName is a valid file and that we can open it for input. 
	//
}
