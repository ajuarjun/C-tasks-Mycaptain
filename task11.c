#include<stdio.h>
struct book
{char title[20];
 char author[20];
 char genre[20];
}b;

void read()
{printf("\n Enter the name of the book:");
 scanf("%s",&b.title);
 printf("\n Enter the name of author:");
 scanf("%s",&b.author);
 printf("\n Enter the genre of the book:");
 scanf("%s",&b.genre);
}

void display()
{printf("\n Details are:");
 printf("\n Title: %s",b.title);
 printf("\n Author: %s",b.author);
 printf("\n Genre: %s",b.genre);
}

main()
{
 read();
 display();
}
