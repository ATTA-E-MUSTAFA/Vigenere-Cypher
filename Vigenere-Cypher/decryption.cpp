#include<iostream>
using namespace std;

//Function for decrypting the data

string decryption(string cypherText, string key) {

	string plainText;

	string newText = key;

	while (cypherText.length() > newText.length())
	{
		newText += key;
	}

	for (int i = 0; cypherText[i]!='\0'; i++)
	{
		plainText += ((cypherText[i] - newText[i]) + 26 ) % 26 + 65;
	}

	return plainText;
}