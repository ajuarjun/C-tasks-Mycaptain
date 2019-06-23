#include<stdio.h>
#include<stdlib.h>
main()
{float celsius,fahrenheit;
 int choice,x;
 
 printf("\n Temperature conversion:");
 printf("\n 1.Celsius to fahrenheit \n 2.Fahrenheit to celsius \n 3.Exit");
 printf("\n Choose from the above choices(1,2,3):");
 scanf("%d",&choice);
 
 switch(choice)
 {case 1: printf("\n Enter the temperature in celsius:");
          scanf("%f",&celsius);
          fahrenheit=(9/5)*celsius+32;
          printf("\n Temperature in fahrenheit : %f",fahrenheit);
          break;
          
  case 2: printf("\n Enter the temperature in fahrenheit:");
          scanf("%f",&fahrenheit);
          celsius=(5/9)*(fahrenheit-32);
          printf("\n Temperature in celsius: %f",celsius);
          break;
          
  case 3: exit(0);
        
  default:printf("\n Wrong choice");
 }
 
}
