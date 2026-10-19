#include<stdio.h>
int main()
{
  double num1, num2;
char operation;
printf("enter the operation(+,/,-,*):");
scanf("%c",&operation);
printf("enter the two numbers");
scanf("%lf %lf", &num1, &num2);
switch(operation){
case'+':
printf("result:%.2f\n",num1+num2);
  break;
  case'-':
  printf("result:%.2f\n",num1-num2);
break;
case'*':
printf("result:%.2f\n",num1*num2);
break;
case'/':
if(num2==0){
printf("error:cannot divide by zero");
}else{
printf("result:%.2f\n",num1/num2);
}
break;
default:
printf("error:unknown operation.\n");
}
return 0;
}
