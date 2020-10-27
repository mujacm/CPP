/*
Problem: To encrypt and decrypt a message by manual key. Basically, to create a secret message for communication.
*/

#include <iostream>
#include <math.h>
#include<string>
using namespace std;

int main()
{
    string alphabet{ "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ" };
    string key{ "qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM" };
    string msg;
    cout << "Enter your secret message: ";
    getline(cin, msg);
    cout << endl << "Encrypting..." << endl;
    string encrypt = {};
    int l=msg.length();
    int al=alphabet.length();
    for (int i=0;i<l;i++)
    {
        for(int j=0;j<al;j++)
        {
            if(alphabet[j]==msg[i])
            msg[i]=key[j];
        }
    }
    int kl=key.length();
    cout<<"Encrypted message is: "<<msg;
    cout<<endl<<"Decrypting...";
    for (int i=0;i<l;i++)
    {
        for(int j=0;j<kl;j++)
        {
            if(key[j]==msg[i])
            msg[i]=alphabet[j];
        }
    }
    cout<<endl<<"Decrypted message is: "<<msg;
    return 0;
}
