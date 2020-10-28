#include <iostream.h>
#include <conio.h>

void Inputarray(int A[][10], int row, int col)
{ cout<<"Enter the array row-wise"<<endl ;
  for (int i=0 ; i<row ; i++)
  { for (int j=0 ; j<col ; j++)
    { cin>>A[i][j] ; }
  }
  cout<<endl<<endl ;
}

void Displayarray(int A[][10], int row, int col)
{ cout<<"The matrix entered is"<<endl ;
  for (int i=0 ; i<row ; i++)
  { for (int j=0 ; j<col ; j++)
    { cout<<A[i][j]<<" " ; }
    cout<<endl ;
  }
  cout<<endl<<endl ;
}

void Disptoptriangle(int A[][10], int row, int col)
{ cout<<"The top triangle elements are"<<endl ;
  int a=0 ;
  for (int i=0 ; i<row ; i++)
  { for (int j=a ; j<col ; j++)
    { cout<<A[i][j]<<" " ; }
    a++ ;
  }
  cout<<endl<<endl ;
}

void Dispbottomtriangle(int A[][10], int row, int col)
{ cout<<"The bottom triangle elements are"<<endl ;
  int b=0 ;
  for (int i=0 ; i<row ; i++)
  { for (int j=0 ; j<=b && b<col ; j++)
    { cout<<A[i][j]<<" " ; }
    b++ ;
  }
  cout<<endl<<endl ;
}

void main()
{ clrscr() ;
  int x[10][10], r, c ;
  cout<<"Enter the no. of rows and columns"<<endl ;
  cin>>r>>c ;
  Inputarray(x, r, c) ;
  Displayarray(x, r, c) ;
  Disptoptriangle(x, r, c) ;
  Dispbottomtriangle(x, r, c) ;
  getch() ;
}

