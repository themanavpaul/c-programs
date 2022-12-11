// Transpose of Matrix
#include<stdio.h>    
int main() {  
	int A[10][10],T[10][10],row,col,i,j;   
	
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
		  scanf("%d",&A[i][j]);    
		}    
	 }    

    // Transpose Matrices
	printf("Sum of the matrix=\n");     
	for(i=0;i<row;i++)    
	{    
	  for(j=0;j<col;j++)    
	  {    
		
		  T[i][j] = A[j][i];
	  }    
	}    
	//Printing Output   
	for(i=0;i<row;i++)    
	{    
		printf("\n");   
	  for(j=0;j<col;j++)    
	  {    
	    printf("%d\t",T[i][j]);    
	  }    
	 
	}    
return 0;  
}  
