#include <stdio.h>
int main()
{
    int x,i,s=0;
    printf("enter a number:");
    scanf("%d",&x);
    if(x<=1)
    {
        s=1;
    }
    else{
        for(i=2;i<x;i++){
            if(x%i==0){
                s=1;
                break;
            }
        }
    }
    if(s==0)
    printf("%d is a prime number",x);
    else
    printf("%d is not a prime number",x);
    
    return 0;
    }
    
