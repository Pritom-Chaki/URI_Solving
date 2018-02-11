#include<stdio.h>

int main()
{
    int x,z,i,n=0,count=0;
    scanf("%d",&x);
    scanf("%d",&z);
    while(x>=z)
    {scanf("%d",&z);}

for(i=x; ; i++)
{   count++;
    n+=i;
    if(n>=z)
    {
        break;
    }
}
     printf("%d\n",count);
    return 0;
}
