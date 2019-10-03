#include<stdio.h>
main()
{int age;
 char name[10];
 long int phone;
 char city[30];
 
 printf("\n Enter name:");
 scanf("%s",name);
 printf("\n Enter age:");
 scanf("%d",&age);
 printf("\n Enter telephone number:");
 scanf("%d",&phone);
 printf("\n Enter the city in which you are residing!:");
 gets(city);
 
 printf("\n The details are:");
 printf("\n Name: %s",name);
 printf("\n Age: %d",age);
 printf("\n Phone number: ");
 printf("%d",phone);
 printf("\n City: %s",city);
}
