 #include<stdio.h>
int main()
{

    float num1,num2,result;
    int mod_result ;
    char operator ;

   printf("\t\t\t calculator \n\n");
   printf("\t operations : \n");
   printf("\t\t addition + : \n");
   printf("\t\t subtraction - : \n");
   printf("\t\t multiplication *: \n");
   printf("\t\t division / : \n");
   printf("\t\t modulus % : \n");


  repeat:
      printf("enter first operand:");
      scanf("%f",&num1);
      printf("enter second number");
      scanf("%f",&num2);
      printf("enter operation:");
      scanf(" %c", &operator);

      switch(operator)
      {
      case '+':
            result = num1 + num2;
          printf("%f + %f = %f",num1,num2,result);
          break;

          case '-':
          result = num1 - num2;
          printf("%f - %f = %f",num1,num2,result);
          break;


          case '*':
          result = num1 * num2;
          printf("%f * %f = %f",num1,num2,result);
          break;


          case '/':
          result = num1 / num2;
          printf("%f / %f = %f",num1,num2,result);
          break;


        case '%':

          mod_result=(int)num1 %(int)num2;
          printf("%f %% %f = %f",num1,num2,mod_result);
          break;


          default:
          printf("invalid operator.try again");
          break;
      }

     printf("\n continue? (Y/N):");
      scanf(" %c", &operator);
      if(operator == 'N' ||operator =='n'){
        printf("thank you for using calculator");
        return 0;

      }

      printf("\n\n");
      goto repeat;

      return 0;

}
