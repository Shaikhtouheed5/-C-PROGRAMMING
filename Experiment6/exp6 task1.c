#include<stdio.h>
void counter(){
static int count = 0;
count++;
printf("Counter Function Called : %d\n", count);
}

int main(){
    int i;
printf("\t\t\t\t****STORAGE CLASS****\n\n");
 for(i=1;i<=58; i++)
    counter();
 return 0;
}
