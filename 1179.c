#include<stdio.h>

int main()
{
    int i,n,par[20],impar[20],a1=0,a2=0;
    int mat[15][15];

    for(i=0;i<10;i++)
    {
        scanf("%d", &n);
        if(n%2==0)
        {
         par[a1]=n;
         a1++;
        }
        else
        {
            impar[a2]=n;
            a2++;
        }
    }

for(i=0;i<a1;i++)
    {
        printf("%d\n", par[i]);
    }

    return 0;
}

