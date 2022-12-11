// Sum of cube of First n Natural Numbers
#include <stdio.h>
int main() {
 int i,n;
   printf("Enter Natural Number ");
   scanf("%d", &n);
   int sum = 0;
   
   for (i = 1; i <= n; i++) {
      sum += i * i * i;
   }
   
   printf("%d", sum);
   return 0;
}
