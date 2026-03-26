#include <stdio.h>

int main() 
{
   int num,i=0;
   printf("Enter a number");
   scanf("%d",&num);
   int a[10]={0};
   while(num!=0)
   {
       a[i]=num%10;
       num=num/10;
       i++;
   }
   for(int j=0;j<i/2;j++)
   {
       if(a[j]!=a[i-j-1])
       printf("its not a palindrome");
       else
       printf("is a palindrome");
   }
   

    return 0;
}
