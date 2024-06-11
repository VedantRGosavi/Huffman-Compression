#pragma once
#include <stdlib.h>
#include <string>
#include <fstream>

using namespace std;

class Huffman
{
public:										
	void DisplayHelp();										//Mode 1: Display the proper usuage options to the user and exits.
	void EncodeFile(string inputFile, string outFile);		//Mode 2: Encode the input file and store the encoding into the output file.
	void DecodeFile(string inputFile, string outFile);		//Mode 3: Decode the input file adn store the decoding into the output file.
	void MakeTreeBuilder(string inputFile, string outFile); //Mode 4: Make the Tree for the given input file and aftermaking it puts it into the outfile.
	void EncodeFileWithTree(string inputFile, string TreeFile, string outputFile);		//Mode 5: Encoding the input file with Tree Encoded file
	
	

private:

	void validFileNames(string command, string inputFile, string outFile);	    // Validates the input and output file names to be correct and true.
	void buildFrequencyCounts(string fileName);									// Computes the frquency of each unique character that appears in the file.
	struct treenode
	{
		unsigned char symb;			//the node's character (key)
		unsigned int weight;		//the node's frequency (value) 
		treenode* lch;
		treenode* rch;
	};
};