// Matrix Multiplication
#include<stdio.h>    
int main() {  
	int first[10][10],second[10][10],mul[10][10],row,col,i,j,k;   
	
	printf("enter the number of row = ");    
	scanf("%d",&row);    
	printf("enter the number of column = ");    
	scanf("%d",&col); 
	// First Matrix
	printf("enter the first matrix element=\n");    
	for(i=0;i<row;i++)    
	 {    
	   for(j=0;j<col;j++)    
		{    
		  scanf("%d",&first[i][j]);    
		}    
	 }    
	 // Second MAtrix
	printf("enter the second matrix element=\n");    
	for(i=0;i<row;i++)    
	{    
	  for(j=0;j<col;j++)    
	   {    
		scanf("%d",&second[i][j]);    
	   }
	}    
    // Multiply Matrices
	printf("multiply of the matrix=\n");    
	for(i=0;i<row;i++)    
	{    
	  for(j=0;j<col;j++)    
	  {    
		mul[i][j]=0;    
		for(k=0;k<col;k++)    
		{    
		  mul[i][j]+=first[i][k]*second[k][j];    
		}    
	  }    
	}    
	//Printing Output   
	for(i=0;i<row;i++)    
	{    
	  for(j=0;j<col;j++)    
	  {    
	    printf("%d\t",mul[i][j]);    
	  }    
		printf("\n");    
	}    
return 0;  
}  
