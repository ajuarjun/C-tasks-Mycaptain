#include<stdio.h>
main()
{float mark1,mark2,mark3,avg,sum;

 printf("\n Enter marks in three subjects:");
 scanf("%f%f%f",&mark1,&mark2,&mark3);
 
 sum=mark1+mark2+mark3;
 avg=sum/3;
 
 printf("\n The total sum of marks:%f",sum);
 printf("\n The average is:%f",avg);
}
