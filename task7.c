#include<stdio.h>
#include<string.h>
main()
{char str[20],str1[20];

 printf("\n Enter a string:");
 scanf("%s",str);
 
 strcpy(str1,str);
 strrev(str);
 
 if(strcmp(str1,str)==0)
 {printf("\n It is a palindrome");
 }
 else
 {printf("\n It is not a palindrome");
 }
 
}
