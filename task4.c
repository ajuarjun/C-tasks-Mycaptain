#include<stdio.h>
#include<string.h>
main()
{char first[20],last[20],full[41],i;

 printf("\n Enter first name:");
 scanf("%s",first);
 printf("\n Enter last name:");
 scanf("%s",last);
 
 strcpy(full,first);
 strcat(full," ");
 strcat(full,last);
 
 printf("\n Full name is:%s",full);
}
