#include<stdio.h>

int main()
{
    int T;
    unsigned long long int Fib[1000],fib,a,b,i,n;
    scanf("%d",&T);
    while(T--)
  {
    a=0;
    b=1;
    Fib[0]=0;
    Fib[1]=1;
    scanf("%llu",&n);
    for(i=2; i<=n ;i++)
    {
        fib=a+b;
        Fib[i]=fib;
        a=b;
        b=fib;

    }

    printf("Fib(%llu) = %llu\n",n,Fib[n]);
  }
    return 0;
}
