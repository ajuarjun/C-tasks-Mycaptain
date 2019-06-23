#include<stdio.h>
#include<math.h>
main()
{int num,x,arm=0,len,digit;
 printf("\n Enter number:");
 scanf("%d",&num);
 
 len=0;
 x=num;
 while(x>0)
 {x=x/10;
  len++;
 }
 
 x=num;
 
 while(x>0)
 {digit=x%10;
  arm=arm+pow(digit,len);
  x=x/10;
 }
 
 if(arm==num)
 {printf("\n %d is  an armstrong number",num);
 }
 else
 {printf("\n %d is not an armstrong number",num);
 }
}
