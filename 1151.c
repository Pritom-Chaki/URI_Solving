#include<stdio.h>

int main()
{
    int i,feb=0,n,count=2,temp;
    scanf("%d",&n);
    temp=n-3;
    int a=0,b=1;
    printf("%d %d ",a,b);
    while(n>count)
    {     feb=a+b;
        printf("%d",feb);
        if(temp>0)
        {
            printf(" ");
        }
        a=b;
        b=feb;
        count++;
        temp--;
    }
    printf("\n");
    return 0;
}

