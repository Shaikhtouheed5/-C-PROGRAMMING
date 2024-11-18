#include<stdio.h>
int isprimenumber(int num);

int isprimenumber(int num){
    int i;
    for( i=2; i<num; i++){
        if(num % i == 0)
            return 0;
        }

  return 1;
}
int main(){
 int start_num, end_num,i;
 printf("\t\t\t\t*****PRIME NUMBER FINDER*****\n\n\n");
 printf("ENTER STARTING NUMBER:");
 scanf("%d",&start_num);
 printf("ENTER ENDING NUMBERT:");
 scanf("%d",&end_num);

 i= start_num<=1?2:start_num;
 printf(" PRIME NUMBERS BETWEEN %d and %d: ", start_num,end_num);
 while(i<= end_num){
    if(isprimenumber(i)){
        printf("%d,",i);

    }
    i++;
 }
 return 0;
 }
