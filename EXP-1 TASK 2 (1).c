#include<stdio.h>
int main ()
{ int P,C,M,Avg;

     printf("ENTER PHYSICS MARKS:\n");
    scanf("%d",&P);

     printf("ENTER CHEMISTRY MARKS:\n");
    scanf("%d",&C);

    printf("ENTER MATHS MARKS:\n");
    scanf("%d",&M);

    Avg = (P + C + M)/3;

    printf("PCM Avg= %d",Avg);
    Avg>=50?printf("\nYou are eligible for admission"):printf("\nYou are not eligible for admission");


}
