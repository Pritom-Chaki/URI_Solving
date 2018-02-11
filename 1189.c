#include<stdio.h>

int main()
{
    int i,j,n,m;
    double sum=0,avg=0;
    double mat[15][15];
    char ch[2];
    n=0;
    m=1;

   scanf("%s",&ch);

    for(i=0;i<=5;i++)
    {
        for(j=0;j<=5;j++)
        {
            scanf("%lf", &mat[i][j]);
        }
    }
for(i=0;i<=5;i++)

    {
        for(j=0;j<=5;j++)
        {
                sum=sum+mat[i][j];
                printf("%0.1lf\n",sum);
                n++;
        }

    }

avg = sum/30;

if(ch[0]=='S')
    {
        printf("%0.1lf\n",sum);
    }
 if(ch[0]=='M')
    {
        printf("%0.1lf\n",avg);
    }
    return 0;
}




