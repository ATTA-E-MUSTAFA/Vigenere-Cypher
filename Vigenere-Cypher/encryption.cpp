#include<iostream>
using namespace std;

//Function for encryption

string encryption(string plainText, string key) {

	string cypherText;
	
	string newText = key;

	while (plainText.length() > newText.length())
	{
		        newText += key;
    }
	
	for (int i = 0; plainText[i] != '\0'; i++)
	{
		
		cypherText += (plainText[i] + newText[i]) % 26 + 65;
	}
	
	return cypherText;
}