#include<iostream.h>
#include<conio.h>
#include<string.h>

void main()
{
 clrscr();
 char string[10];
 int counter=0;
 cout<<"Please enter a string : " <<endl;
 cin>>string;
 for(int i=0; i<strlen(string); i++)
 {
   if(string[i] != string[strlen(string)-i-1])
   {
      counter++;
      break;
   }
 }
 if(counter !=0)
 {
   cout<<"Sorry your string is not a palindrome."<<endl;

  }
 else
 {
   cout<<"String is an palindrome."<<endl;
 }
 getch();
 }