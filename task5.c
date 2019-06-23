#include<stdio.h>
main()
{int num,n,rev=0,digit;

 printf("\n Enter the number:");
 scanf("%d",&num);
 
 n=num;
 while(n>0)
 {digit=n%10;
  rev=rev*10+digit;
  n=n/10;
 }
 
 printf("\n The reverse of the number %d is %d",num,rev);
}
