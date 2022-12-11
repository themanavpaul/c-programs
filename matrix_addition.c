// Matrix Addition
#include<stdio.h>    
int main() {  
	int first[10][10],second[10][10],sum[10][10],row,col,i,j,k;   
	
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
    // Addition Matrices
	printf("Sum of the matrix=\n");  
	sum[i][j]=0;    
	for(i=0;i<row;i++)    
	{    
	  for(j=0;j<col;j++)    
	  {    
		
		  sum[i][j] = first[i][k] + second[k][j];
	  }    
	}    
	//Printing Output   
	for(i=0;i<row;i++)    
	{    
	  for(j=0;j<col;j++)    
	  {    
	    printf("%d\t",sum[i][j]);    
	  }    
		printf("\n");    
	}    
return 0;  
}  
