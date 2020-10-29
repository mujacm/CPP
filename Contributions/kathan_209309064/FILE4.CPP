#include <iostream.h>
#include <conio.h>

int Large (int n)
{ return n ; }

int Large (int a, int b)
{ if (a>b)
  { return a ; }
  else
  { return b ; }
}

int Large (int A[], int size)
{ int l = A[0] ;
  for (int i=0 ; i<size ; i++)
  { if (l<A[i])
    { l = A[i] ; }
  }
  return l ;
}

void main()
{ clrscr() ;
  int ch, n ;
  cout<<"Choose from the options below"<<endl ;
  cout<<"1. Enter a no."<<endl ;
  cout<<"2. Enter 2 nos."<<endl ;
  cout<<"3. Enter an array of nos."<<endl ;
  cout<<endl ;
  cin>>ch ;
  if (ch==1)
  { cout<<"Enter the no."<<endl ;
    cin>>n  ;
    int x = Large(n) ;
    cout<<"Largest no. is "<<x ;
  }
  if (ch==2)
  { cout<<"Enter 2 nos."<<endl ;
    int n1, n2 ;
    cin>>n1>>n2  ;
    int y = Large(n1,n2) ;
    cout<<"Largest no. is "<<y ;
  }
  if (ch==3)
  { cout<<"Enter the no. of elements"<<endl ;
    int n3, z[20] ;
    cin>>n3  ;
    cout<<"Enter the elements"<<endl ;
    for (int i=0 ; i<n3 ; i++)
    { cin>>z[i] ; }
    int x = Large(z, n3) ;
    cout<<"Largest no. is "<<x ;
  }
  getch() ;
}