#include<stdio.h>
int main()
{
    int N[1001],i,T,a=0;

    scanf("%d",&T);

    for(i=0;i<=1000;i++)
    {
            N[i]=a;
            a++;
            if(a==T)
            {
                a=0;
            }
    }
    for(i=0;i<=999;i++)
    {
        printf("N[%d] = %d\n",i,N[i]);
    }
    return 0;
}
