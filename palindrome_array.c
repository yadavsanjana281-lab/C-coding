#include <stdio.h>

void main() 
{
   int num,i=0,a[10];
   printf("Enter a number:");
   scanf("%d",&num);
   while(num!=0)
   {
       a[i]=num%10;
       num=num/10;
       i++;
   }
   for(int j=0;j<i;j++)
   {
       if(a[j]!=a[i-j-1])
       {
       printf("its not a palindrome");
       }
   }
   printf("is a palindrome");
}
