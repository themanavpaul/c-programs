// Count String characters
#include<stdio.h>
#include <string.h>
 
void main()
{
    char s[200];
    int i=0;
  // String inout
    printf("Enter the string:\n");
    scanf("%[^\n]s", s);
    // Loop runs till it find empty/null
    while(s[i] != '\0')
    {
     ++i;
 }
      printf("Length of string:  %d", i);
    
    return 0;
    
}
