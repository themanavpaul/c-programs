// Traverse an Array
#include<stdio.h>    
void main() {  
	int arr[5] = {2,5,6,7,8};
	int n=5;
	traverse(arr,n);

return 0;  
}  

void traverse( int *array, int size)
{
	int i=0;
	for(i=0; i<size; i++)
	printf("arr[%d] is %d\n",i,array[i]);
}
