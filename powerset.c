#include <stdio.h>

int main() {
    int a[3]={10,12,15};
    printf("power set:\n");
    printf("{ }\n");
    for(int i=0;i<3;i++)
    {
        printf("{%d}\n",a[i]);
        for(int j=1+i;j<3;j++)
        {
            printf("{%d%d}\n",a[i],a[j]);
        }
    }
    printf("{10,12,15}\n");
     return 0;
}
