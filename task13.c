#include<stdio.h>
main()
{int arr[50],i,small,large,size;

 printf("\n Enter the size of the array:");
 scanf("%d",&size);
 printf("\n Enter values of the array:");
 scanf("%d",&arr[0]);
 
 small=arr[0];
 large=arr[0];
 
 for(i=1;i<size;i++)
 {scanf("%d",&arr[i]);
  if(arr[i]>large)
  large=arr[i];
  if(arr[i]<small)
  small=arr[i];
 }
 
 printf("\n The array is:");
 for(i=0;i<size;i++)
 {printf("%d \n",arr[i]);
 }
 
 printf("\n The largest number in the array: %d",large);
 printf("\n The smallest number in the array: %d",small);
}
