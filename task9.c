#include<stdio.h>
main()
{int num,fact=1,i;

 printf("\n Enter the number:");
 scanf("%d",&num);
 
 if(num>=0)
 {for(i=1;i<=num;i++)
  {fact=fact*i;
  }
 
 printf("\n The factorial of the number is %d",fact);
 }
 else 
 {printf("\n Factorial cannot be calculated.");
 }
}
