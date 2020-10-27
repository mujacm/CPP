/*
Problem: To encrypt and decrypt a message by manual key. Basically, to create a secret message for communication.
*/

#include <bits/stdc++.h>
#include <math.h>
#include<string>
using namespace std;

int main()
{
	string alphabet
	{
		"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"
	};
	string key
	{
		"qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM"
	};
	string msg;
	cout << "Enter your secret message: ";
	getline(cin, msg);
	cout << endl << "Encrypting..." << endl;
	string encrypt = {};
	//transfers alphabet to key
	for (int i = 0; i < msg.length(); i++)
	{
		for (int j = 0; j < alphabet.length(); j++)
		{
			if (alphabet[j] == msg[i])
				msg[i] = key[j];
		}
	}
	cout << "Encrypted message is: " << msg;
	cout << endl << "Decrypting...";
	//transfers key to alphabet(decryption)
	for (int i = 0; i < msg.length(); i++)
	{
		for (int j = 0; j < key.length(); j++)
		{
			if (key[j] == msg[i])
				msg[i] = alphabet[j];
		}
	}
	cout << endl << "Decrypted message is: " << msg;
	return 0;
}
