#include<stdio.h>


int factoriallterative(int num) {
int prod = 1;
for(int i=1; i<=num; i++){
prod*= i;
}
return prod;
}
int main()
{
int num;
printf ("\t\t** Iterative Factorial Function ** \n\n");
printf ("ENTER NUMBER:");
scanf ("%d",num);
printf ("Factorial of %d is %d",num,factoriallterative(num));
return 0;
}
