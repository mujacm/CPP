#include <iostream.h>
#include <conio.h>

void InputArray(int A[3][3], int row, int col)
{ cout<<"Enter the elements row-wise"<<endl ;
  for (int i=0 ; i<row ; i++)
  { for (int j=0 ; j<col ; j++)
    { cin>>A[i][j] ; }
  }
  clrscr() ;
}

void DisplayArray(int A[3][3], int row, int col)
{ cout<<"The array entered is"<<endl ;
  for (int i=0 ; i<row ; i++)
  { for (int j=0 ; j<col ; j++)
    { cout<<A[i][j]<<" " ; }
    cout<<endl ;
  }
  getch() ;
  clrscr() ;
}

void SumRow(int A[3][3], int row, int col)
{ int sumr[10] ;
  for (int i=0 ; i<row ; i++)
  { sumr[i]=0 ;
    for (int j=0 ; j<col ; j++)
    { sumr[i] += A[i][j] ; }
  }
  for (int k=0 ; k<row ; k++)
  { cout<<"The sum of row "<<(k+1)<<" is "<<sumr[k]<<endl ; }
  getch() ;
  clrscr() ;
}

void SumCol(int A[3][3], int row, int col)
{ int sumc[10] ;
  for (int i=0 ; i<col ; i++)
  { sumc[i]=0 ;
    for (int j=0 ; j<row ; j++)
    { sumc[i] += A[j][i] ; }
  }
  for (int k=0 ; k<col ; k++)
  { cout<<"The sum of column "<<(k+1)<<" is "<<sumc[k]<<endl ; }
  getch() ;
  clrscr() ;
}

void SumDiag(int A[3][3], int row, int col)
{ int sumd=0 ;
  if (row==col)
  { for (int i=0, j=0 ; i<row, j<col ; i++, j++)
    { sumd += A[i][j] ; }
    cout<<"The sum of diagonal elements is "<<sumd ;
  }
  else
  { cout<<"Diagonal does not exist"<<endl ; }
  getch() ;
  clrscr() ;
}

void main()
{ clrscr() ;
  int x[3][3] ;
  InputArray(x, 3, 3) ;
  DisplayArray(x, 3, 3) ;
  SumRow(x, 3, 3) ;
  SumCol(x, 3, 3) ;
  SumDiag(x, 3, 3) ;
  getch() ;
}
