#include<stdio.h>
main()
{int num,i;

 printf("\n Enter the number:");
 scanf("%d",&num);
 
 printf("\n The multiplication table:");
 for(i=1;i<=10;i++)
 {printf("\n %d x %d = %d",num,i,num*i);
 }
 
}
